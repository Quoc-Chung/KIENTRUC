#include<bits/stdc++.h>
using namespace std;

int nx, ny;
string X, Y;
int L[100][100];

int xau_con_chung() {
	int len = 0, row, col;
	for (int i = 1; i <= nx; i++) {
	    for (int j = 1; j <= ny; j++) {
	        if (X[i-1] == Y[j-1]) {
	        	L[i][j] = L[i - 1][j - 1] + 1;
	        	if (len < L[i][j]) {
	        		len = L[i][j];
	        		row = i;
	        		col = j;
				}
			}
	        else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
	    }
	}
	
	string resultStr="";
	while (L[row][col] != 0) {
		if (L[row][col] != L[row-1][col-1])
			resultStr = X[row - 1] + resultStr;
        row--;
        col--;		
	}
	cout << "Xau con chung dai nhat: " << resultStr<<endl;
	
	return L[nx][ny];
}

int main()
{	
	X = "ALTRISTICDA";
	Y = "ALGORITHMSDA";
	nx = X.length();
	ny = Y.length();
	for (int i = 0; i <= nx; i++)
		L[i][0] = 0;
	for (int j = 0; j <= ny; j++)
		L[0][j] = 0;
	int kq = xau_con_chung();
	cout<<"Do dai xau con chung dai nhat la: "<<kq<<endl;
	
	cout<<"L[i, j] = {"<<endl;
	for (int i = 0; i <= nx;i++) {
		for (int j = 0; j<= ny; j++) {
			cout<<L[i][j]<<" ";
			if (j==ny) cout<<endl;
		}
	}
	cout<<"}"<<endl;
	
	return 0;
}


