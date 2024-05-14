#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(int X[], int n, int T) { 
   if (T == 0) return true; 
   if (n == 0 && T != 0) return false; 
   // Truong hop phan tu cuoi lon hon T thi bo qua
   if (X[n - 1] > T) 
      return isSubsetSum(X, n - 1, T); 
   return isSubsetSum(X, n - 1, T) ||
                        isSubsetSum(X, n - 1, T - X[n-1]); 
} 

int main()
{
	int T = 12, n = 7;
	int X[] = {8, 6, 7, 5, 3, 10, 9};
	if (isSubsetSum(X, n, T)) cout<<"True";
	else cout<<"False";
	
	return 0;
}


