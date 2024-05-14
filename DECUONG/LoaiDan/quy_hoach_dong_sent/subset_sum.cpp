// A Dynamic Programming solution for subset sum problem 
#include<bits/stdc++.h>
using namespace std;
   
bool isSubsetSum(int X[], int n, int T) 
{ 
    // The value of S[i][j] will be true if there is a  
    // subset of X[0..i-1] with sum equal to j
    bool S[n+1][T+1];
   
    // If T is 0, then answer is true
    for (int i = 0; i <= n; i++)
      S[i][0] = true;
   
    // If T is not 0 and set is empty, then answer is false 
    for (int t = 1; t <= T; t++)
      S[0][t] = false;
   
    // Fill the subset table in botton up manner 
    for (int i = 1; i <= n; i++)
    { 
       for (int t = 1; t <= T; t++)
       { 
         if (t < X[i-1])  //X[i-1] vi mang X co chi so bat dau tu 0
         	S[i][t] = S[i-1][t]; // avoid the case T - X[i] < 0
         if (t >= X[i-1]) // X[i-1]) >= T
           	S[i][t] = S[i-1][t] || S[i - 1][t-X[i-1]];
       }
    }
     
    cout<<"Solution table:"<<endl;
    for (int i = 0; i <= n; i++) {
     	for (int t = 0; t <= T; t++)
     		cout<<S[i][t]<<" ";
     	cout<<endl;
	}
   
     return S[n][T]; 
} 
   
int main() 
{ 
  //int X[] = {3, 34, 4, 12, 5, 2}; 
  //int T = 9; 
  int X[] = {3, 4, 5, 2};
  int T = 6;
  int n = sizeof(X)/sizeof(X[0]);
  if (isSubsetSum(X, n, T) == true) 
     printf("Found a subset with given sum"); 
  else
     printf("No subset with given sum"); 
  return 0; 
}


