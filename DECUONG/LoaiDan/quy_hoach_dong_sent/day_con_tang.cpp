#include<bits/stdc++.h>
using namespace std;

int LIS(int A[], int L[], int n) {
	for (int i = 1; i <= n+1; i++) {
		L[i] = 1;
	}
	A[n+1] = INT_MAX;
	
	for (int i = 2; i <= n+1; i++) {
		for (int j = 1; j < i; j++) {
			if (A[i] >= A[j])
				L[i] = max(L[i], L[j] + 1);
		}
	}

    return L[n+1] - 1;
} 

void PrintLIS(int A[], int L[], int n, int M) {
	int m = INT_MAX;
	
	cout<<"Day con tang dai nhat la: ";
	for (int i = n; i>0; i--) {
		if (L[i] == M && A[i] <= m) {
			cout<<A[i]<<" ";
			m = A[i];
			M--;
		}
	}
}

int main()
{
	int n = 10, M = 0;
	int A[n+1] = {0, 1, 5, 2, 3, 6, 4, 8, 7, 9, 10}; //Bo phan tu tai vi tri 0
	int L[n+1];
	
	M = LIS(A, L, n);
	cout<<"So phan tu cua day con tang dai nhat la: "<<M<<endl;
	cout<<"Cac gia tri cua mang L[i] la: ";
	for (int i = 1; i<=n; i++)
		cout<<L[i]<<" ";
	cout<<endl;

	PrintLIS(A, L, n, M);
	
	return 0;
}


