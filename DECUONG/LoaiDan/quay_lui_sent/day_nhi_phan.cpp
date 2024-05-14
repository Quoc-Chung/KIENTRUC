#include<bits/stdc++.h>
using namespace std;

void output(int x[], int n) {
	for (int i = 1; i <= n; i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void backtracking(int x[], int i, int n) { 
    for (int j=0; j<=1; j++) {
        x[i] = j;
        if (i == n)   //neu tim den xi cuoi cung thi xuat ra ket qua
            output(x, n);
        else
            backtracking(x, i+1, n); // chua tim den i cuoi thi tang i len
    }
}

int main()
{
	int n = 3;
	int x[n];
	backtracking(x, 1, n);
	
	return 0;
}


