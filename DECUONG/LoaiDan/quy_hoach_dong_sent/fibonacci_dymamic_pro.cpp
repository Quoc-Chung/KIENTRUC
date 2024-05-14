#include<bits/stdc++.h>
using namespace std;

int n = 45;

 void fibonacci (long F[]) {
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= n; i++)
        F[i] = F[i-1] + F[i-2];
}

int main()
{
	long F[n];
	fibonacci(F);
	for (int i = 0; i <= n; i++)
		cout<<F[i]<<" ";
	
	return 0;
}


