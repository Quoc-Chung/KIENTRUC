#include<bits/stdc++.h>
using namespace std;

int n = 5, M = 27;
int a[] = {0, 1, 2, 3, 5, 10}; //Tinh tu a[1]
int choose[6][28];
int number[6];
int L[6][28];

int DoiTien() {
	for (int i = 1; i <= n; i++) {
	    for (int t = 1; t <= M; t++) {
	        if (t < a[i]) {
	        	L[i][t] = L[i - 1][t];
	        	choose[i][t] = choose[i - 1][t];
			}
	        else {
	        	L[i][t] = min(L[i - 1][t], L[i][t-a[i]] + 1);
	        	choose[i][t] = i;
			} 
	    }
	}
	
	for (int i = 1; i<=n; i++)
		number[i] = 0;
		
	int m1 = M, k = n;
	while(choose[k][m1] != 0) {
		number[choose[k][m1]] = number[choose[k][m1]] + 1;
		m1 = m1 - a[choose[k][m1]];
	}
	
	k = 1;
	cout<<"Phuong an doi tien la:"<<endl;
	for (int i=1; i<=n; i++)
		if(number[i] != 0) {
			cout<<k<<") "<<number[i]<<" dong tien co menh gia la "<<a[i]<<endl;
			k++;
		}
			
	return L[n][M];
}

int main()
{	
	for (int i = 0; i <= n; i++) {
		L[i][0] = 0;
		choose[i][0] = 0;
	}
		
	for (int t = 1; t <= M; t++) {
		L[0][t] = INT_MAX;
		choose[0][t] = 0;
	}
		
	int kq = DoiTien();
	cout<<"So dong tien it nhat la: "<<kq<<endl;
	
	cout<<endl<<"Bang quy hoach:"<<endl;
	cout<<"L[i, t] = {"<<endl;
	for (int i = 0; i <= n;i++) {
		for (int t = 0; t<= M; t++) {
			cout<<L[i][t]<<" ";
			if (t==M) cout<<endl;
		}
	}
	cout<<"}"<<endl;
	
	return 0;
}


