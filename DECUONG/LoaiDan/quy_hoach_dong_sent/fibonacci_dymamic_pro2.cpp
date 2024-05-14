#include<bits/stdc++.h>
using namespace std;

long fibonacci(int n) {
    if (n < 2) return n;
    long n1 = 1, n2 = 0; // luu co so vao cac bien
    for (int i = 2; i < n; i++) {
        long n0 = n1 + n2;
        n2 = n1;
        n1 = n0;
    }
    return n1 + n2;
}

int main()
{
	long n = 45;
	int fib = fibonacci(n);
	cout<<fib<<endl;
	
	return 0;
}


