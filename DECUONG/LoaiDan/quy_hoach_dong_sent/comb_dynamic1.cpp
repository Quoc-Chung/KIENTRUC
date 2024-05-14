#include<bits/stdc++.h>
using namespace std;

int comb(int n, int k) {
    int c[n][n], i, j;
	c[0][0] = 1;
	for(i = 1; i <= n; i++) {
		c[i][0] = 1; 
		c[i][i] = 1;
		for(j=1; j<i; j++)
		    c[i][j] = c[i-1][j-1] + c[i-1][j];
    }
    
	return c[n][k];
} 
 

int main()
{
	int n = 4, k = 2;
	
	cout<<"To hop chap "<<k<<" cua "<<n<<" la: "<<comb(n, k);
	
	return 0;
}


