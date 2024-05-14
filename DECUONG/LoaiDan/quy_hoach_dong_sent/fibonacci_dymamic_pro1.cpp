#include<bits/stdc++.h>
using namespace std;

int n = 10;

 void fibonacci (int fibresult[]) {
    fibresult[0] = 0;
    fibresult[1] = 1;
    for (int i = 2; i <= n; i++)
        fibresult[i] = fibresult[i-1] + fibresult[i-2];
}

int main()
{
	int fibresult[n];
	fibonacci(fibresult);
	for (int i = 0; i <= n; i++)
		cout<<fibresult[i]<<" ";
	
	return 0;
}


