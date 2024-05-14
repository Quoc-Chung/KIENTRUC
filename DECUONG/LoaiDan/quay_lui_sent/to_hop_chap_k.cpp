#include<bits/stdc++.h>
using namespace std;

void printResult(int x[], int k) {
	cout<<"{";
	for (int i = 1; i <= k; i++) {
		if(i==k)
			cout<<x[i]<<"}";
		else cout<<x[i]<<", ";
	}
	cout<<endl;
}

void backtracking(int x[], int i, int n, int k) { // ham quay lui
    for(int j = x[i-1] + 1; j <= n-k+i; j++ ) { // xet cac kha nang cua i
        x[i] = j; 			// ghi nhan mot gia tri cua i
        if (i == k) { 			// neu cau hinh da du k phan tu
			printResult(x, k); 		// in mot cau hinh
        } else {
            backtracking(x, i+1, n, k); 	// quay lui
        }
     }
}

int main()
{
	int n = 5, k = 3;
	int x[k];
	for (int i=0; i<k;i++)
		x[i] = 0;
	backtracking(x, 1, n, k);
	
	return 0;
}


