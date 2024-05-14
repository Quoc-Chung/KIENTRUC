#include<bits/stdc++.h>
using namespace std;

void isSubsetSum(int X[], int n, int T, vector<int> v) { 
   	if (T == 0) {
        for (auto x : v)
        	cout << x << " ";
        cout <<endl;
   		return;
   	}
   	if (n == 0 && T != 0) return;

   	isSubsetSum(X, n - 1, T, v);
   	v.push_back(X[n - 1]);
    isSubsetSum(X, n - 1, T - X[n - 1], v);
    
} 

int main()
{
	int T = 12, n = 7;
	int X[] = {8, 6, 7, 5, 3, 10, 9};
	vector<int> v;
	isSubsetSum(X, n, T, v);
	
	return 0;
}