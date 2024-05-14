#include<bits/stdc++.h>
using namespace std;

int xepDovat(int g[], int v[], int L[], int P[], int W, int n) {
	int t = W;
	L[t] = 0;
	for (int i = 0; i <= n; i++) {
	    P = L;
	    for (t = 0; t <= W; t++)
	        if (t < g[i]) L[t] = P[t];
	        else L[t] = max(P[t], L[t-g[i]] + v[i]);
	}
	return L[W];
}

int main()
{
	int n = 4, W = 37;
	int g[] = {10, 15, 4, 2};
	int v[] = {25, 30, 6, 2};
	int L[W+1], P[W+1];
	for (int i = 0; i <= W; i++) {
		L[i] = 0; P[i] = 0;
	}
	int kq = xepDovat(g, v, L, P, W, n);
	cout<<"Tong gia tri lon nhat la: "<<kq<<endl;
	cout<<"L[i] = {";
	for (int i = 0; i <= W;i++)
		cout<<L[i]<<" ";
	cout<<"}"<<endl;
	
	return 0;
}


