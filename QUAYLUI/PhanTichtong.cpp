#include<bits/stdc++.h>
using namespace std;
int x[100];
int t[100];
int N;

void inkq(int k) {
	for (int i = 1; i < k; i++)
		cout<<x[i]<<"+";
	cout<<x[k]<<endl;
}

void attempt(int i) {
	for (int j = x[i-1]; j <= (N - t[i-1]) / 2; j++) {
		x[i] = j;
		t[i] = t[i-1] + x[i];
		attempt(i + 1);
	}
	x[i] = N - t[i-1];
	inkq(i);
}

int main()
{
	cout<<"Nhap so N: ";
	cin>>N;
	x[0] = 1;
	t[0] = 0;
	attempt(1);
	
	return 0;
}