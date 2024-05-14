#include<bits/stdc++.h>
using namespace std;

int min_index, max_index;

int maxSubArraySum(int a[], int n) 
{ 
	int f[n], max_sum = 0;
	 
    f[0] = 0;
    for (int i = 1; i <= n; ++i)
		f[i] = f[i-1] + a[i];
	
	min_index = 1;
	max_index = 1;
	for (int i = 1; i < n; i++)
		for (int j = i; j < n; j++) {
			if (max_sum < f[j] - f[i-1]) {
				max_sum = f[j] - f[i-1];
				min_index = i; max_index = j;
			}
		}
			
	return max_sum;
} 
int main() 
{ 
    int n = 11;
	int a[] =  {0, 1, 3, -5, 2, 7, 6, -2, 4, -3, 1}; //{0, -12, 7, 11, -8, 7, 9};
	
	cout << "Tong lon nhat la: " << maxSubArraySum(a,n) << endl;
	
	cout<<"Day con lien tuc co tong lon nhat la: ";
	for (int i = min_index; i <= max_index; i++)
		cout<<a[i]<<" ";

    return 0; 
}

