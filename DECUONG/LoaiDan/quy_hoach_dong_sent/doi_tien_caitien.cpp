#include<bits/stdc++.h>
using namespace std;

int n = 5, M = 27;
int a[] = {0, 1, 2, 3, 5, 10}; //Tinh tu a[1]
int P[28], L[28];

int DoiTien(int P[], int L[]) {
	L[0] = 0;
	for (int i = 1; i <= n; i++) { 
	    for (int t = 1; t <= M; t++) {
	        if (t < a[i]) L[t] = P[t];
	        else L[t] = min(P[t], L[t-a[i]] + 1);
	    }
	    P = L;
	}
	return L[M];
}

int main()
{	
	for (int t = 0; t <= M; t++)
		P[t] = INT_MAX;
		
	int kq = DoiTien(P, L);
	cout<<"So dong tien it nhat la: "<<kq<<endl;
	
	cout<<"L[t] = {";
	for (int t = 0; t <= M; t++) {
		cout<<L[t]<<" ";
	}
	cout<<"}"<<endl;
	
	return 0;
}


