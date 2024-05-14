#include<bits/stdc++.h>
using namespace std;

int comb(int n, int k) {
    if((k == 0) || (k == n))
        return 1;
    else
        return comb(n-1, k-1) + comb(n-1, k);
} 

int main()
{
	int n = 4, k = 2;
	
	cout<<"To hop chap "<<k<<" cua "<<n<<" la: "<<comb(n, k);
	
	return 0;
}


