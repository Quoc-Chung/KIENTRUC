#include<bits/stdc++.h>
using namespace std;

int n = 4, W = 37;
int g[] = {0, 10, 15, 4, 2};
int v[] = {0, 25, 30, 6, 2};
int L[5][38];

int xepDovat() {
	int t=0;
	
	for (int i = 1; i <= n; i++) {
	    for (t = 1; t <= W; t++) {
	        if (t < g[i]) L[i][t] = L[i - 1][t];
	        else L[i][t] = max(L[i - 1][t], L[i][t-g[i]] + v[i]);
	    }
	}
	
	return L[n][W];
}

int main()
{	
	for (int i = 0; i <= n; i++) {
		for (int t = 0; t <= W; t++)
			L[i][t] = 0;
	}
	int kq = xepDovat();
	cout<<"Tong gia tri lon nhat la: "<<kq<<endl;
	
	cout<<"L[i, t] = {";
	for (int i = 0; i <= n;i++) {
		for (int t = 0; t<= W; t++) {
			cout<<L[i][t]<<" ";
			if (t==W) cout<<endl;
		}
	}
	cout<<"}"<<endl;
	
	return 0;
}


