#include<bits/stdc++.h>
using namespace std;

int n = 4;
int x[20];

void output() {
	for (int i = 1; i <= n; i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void backtracking(int i) { 
    for (int j=0; j<=1; j++) {
        x[i] = j;
        if (i == n)   //neu tim den xi cuoi cung thi xuat ra ket qua
            output();
        else
            backtracking(i+1); // chua tim den i cuoi thi tang i len
    }
}

int main()
{
	for (int i = 0; i<=n; i++)
		x[i] = 0;
	backtracking(1);
	
	return 0;
}


