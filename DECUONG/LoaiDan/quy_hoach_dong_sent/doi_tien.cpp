#include<bits/stdc++.h>
using namespace std;

int n = 5, M = 27;
int a[] = {0, 1, 2, 3, 5, 10}; //Tinh tu a[1]
int L[6][28];

int DoiTien() {
	for (int i = 1; i <= n; i++) {
	    for (int t = 1; t <= M; t++) {
	        if (t < a[i]) L[i][t] = L[i - 1][t];
	        else L[i][t] = min(L[i - 1][t], L[i][t-a[i]] + 1);
	    }
	}
	return L[n][M];
}

int main()
{	
	for (int i = 0; i <= n; i++)
		L[i][0] = 0;
	for (int t = 1; t <= M; t++)
		L[0][t] = INT_MAX;
	int kq = DoiTien();
	cout<<"So dong tien it nhat la: "<<kq<<endl;
	
	cout<<endl<<"L[i, t] = {"<<endl;
	for (int i = 0; i <= n;i++) {
		for (int t = 0; t<= M; t++) {
			cout<<L[i][t]<<" ";
			if (t==M) cout<<endl;
		}
	}
	cout<<"}"<<endl;
	
	return 0;
}


