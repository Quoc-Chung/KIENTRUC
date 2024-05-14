#include<bits/stdc++.h>
using namespace std;

int nx, ny;
string X, Y;
int L[100], P[100];

int xau_con_chung(int P[], int L[]) {
	for (int j = 0; j <= ny; j++) {
		P[j] = 0;
	}
	
	L[0] = 0;
	for (int i = 1; i <= nx; i++) {
	    for (int j = 1; j <= ny; j++) {
	        if (X[i-1] == Y[j-1])
	        	L[j] = P[j - 1] + 1;
	        else L[j] = max(P[j], L[j-1]);
	    }
	    P = L;
	}	
	
	return L[ny];
}

int main()
{	
	X = "ChienCong";
	Y = "CongChien";
	nx = X.length();
	ny = Y.length();

	int kq = xau_con_chung(P, L);
	cout<<"Do dai xau con chung dai nhat la: "<<kq<<endl;
	
	cout<<"L[j] = {";
	for (int i = 0; i <= ny; i++) {
		cout<<L[i]<<" ";
	}
	cout<<"}"<<endl;
	
	return 0;
}


