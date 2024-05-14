#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n) 
{ 
	int f[n], max_sum = 0;
	 
    f[0] = 0;
    for (int i = 1; i <= n; ++i)
		f[i] = f[i-1] + a[i];
		
	for (int i = 1; i < n; i++)
		for (int j = i; j < n;j++)
			max_sum = max(f[j] - f[i-1], max_sum);
			
	return max_sum;
} 
int main() 
{ 
    int n = 11;
	int a[] =  {0, 1, 3, -5, 2, 7, 6, -2, 4, -3, 1}; //{0, -12, 7, 11, -8, 7, 9};
	
	cout << maxSubArraySum(a,n) << endl;

    return 0; 
}

