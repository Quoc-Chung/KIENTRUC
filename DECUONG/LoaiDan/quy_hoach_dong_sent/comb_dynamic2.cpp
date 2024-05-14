#include<bits/stdc++.h>
using namespace std;

int comb(int n, int k) {
    int c[n], i, j, p1, p2;
    c[0] = 1; c[1] = 1;
    for(i = 2; i<=n; i++) {
        p1 = c[0];
        for(j=1; j<i; j++) {
            p2 = c[j]; 
			c[j] = p1 + p2; 
			p1 = p2;
        }      
		c[i] = 1;
    }
    return c[k];
} 

int main()
{
	int n = 4, k = 2;
	
	cout<<"To hop chap "<<k<<" cua "<<n<<" la: "<<comb(n, k);
	
	return 0;
}


