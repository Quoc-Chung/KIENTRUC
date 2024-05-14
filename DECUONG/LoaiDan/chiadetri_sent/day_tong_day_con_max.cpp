#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n) 
{ 
   int max_so_far = a[0]; 
   int curr_max = a[0];
   int begin = 0, end = 0;
   
   for (int i = 1; i < n; i++) 
   {
   		if (a[i] > curr_max + a[i]) {
   			curr_max = a[i];
   			begin = i; end = i;
		} else 
			curr_max = curr_max + a[i];

		if (max_so_far < curr_max) {
			max_so_far = curr_max;
			end = i;
		}	
   }
	
	cout<<"Day con lien tiep co tong lon nhat: ";
	for (int i = begin; i<=end; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
   return max_so_far; 
} 

int main() 
{ 
    int n = 6;
	int a[] = {-12, 7, 11, -8, 7, 9};
	
	cout << "Tong lon nhat: " << maxSubArraySum(a,n) << endl;

    return 0; 
}

