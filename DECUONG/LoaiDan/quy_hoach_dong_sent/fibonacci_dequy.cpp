#include<bits/stdc++.h>
using namespace std;

long fibonacci (int n) {
        if (n < 2)
            return n;
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int n = 45;
	long fib = fibonacci(n);
	cout<<fib;
	
	return 0;
}


