#include<bits/stdc++.h>
using namespace std;

void output(int x[], int n) {
	for (int i = 1; i <= n; i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void hoanvi(int x[], int b[], int i, int n) {
    for (int j = 0; j < n; j++) {
        if (b[j] == 0) {	//Khi so nay chua duoc chon
            x[i] = j + 1;	//Do chi so j chay tu 0
            b[j] = 1; 		//Danh dau da su dung so nay
            if (i == n)
                output(x, n);
            else
                hoanvi(x, b, i + 1, n);
            b[j] = 0;
        }
    }
}

int main()
{
	int n = 3;
	int x[n], b[n];
	for (int i=0; i<n;i++) {
		x[i] = 0;
		b[i] = 0;
	}
	hoanvi(x, b, 1, n);
	
	return 0;
}


