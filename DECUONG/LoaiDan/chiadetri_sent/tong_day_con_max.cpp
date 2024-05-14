#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n) 
{ 
   int max_so_far = a[0]; 
   int curr_max = a[0];
   for (int i = 1; i < n; i++)
   { 
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   } 
   return max_so_far; 
} 

int main() 
{ 
    int n = 10;
	int a[] = {1, 3, -5, 2, 7, 6, -2, 4, -3, 1}; //{-12, 7, 11, -8, 7, 9};
	
	cout << maxSubArraySum(a,n) << endl;

    return 0; 
}

