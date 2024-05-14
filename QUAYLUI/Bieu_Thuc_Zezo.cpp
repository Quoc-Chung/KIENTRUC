#include<bits/stdc++.h>
using namespace std;

vector<string> Dau = {"+","-",""}; //Mang dau
vector<string> S = {"1","2","3","4","5","6","7","8","9"};
vector<string> D(10); //Luu dau giua cac so
vector<string> M(100); //Mang luu bieu thuc zero
int N, dem;

void test() {
	string st = "", so = "";
	int i, k = 0, l;
	long T = 0; 
	int dau = 0;

	for (i = 0; i < N; i++)
		st = st + D[i] + S[i];
	l = st.length();
	while (k < l) {
		if (st[k] >= '1' && st[k] <= '9') {
			so = so + st[k];
		} else {
			if (dau == 0) {
				T = stoi(so, nullptr, 10);
			} else {
				if (dau == -1)
					T -= stoi(so, nullptr, 10);
				else T += stoi(so, nullptr, 10);
			}
			if (st[k] == '-') dau = -1; else dau = 1;
			so = "";
		}
		k++;
	}
	if (so != "") {
		if (dau == -1) T = T - stoi(so, nullptr, 10);
		else T = T + stoi(so, nullptr, 10);
	}

	if (T == 0) {
		dem++;
		M[dem] = st;
	}
}

void zero_expr(int i) {
	for (int j = 0; j < 3; j++) {
		D[i] = Dau[j];
		if (i == N) test();
		else zero_expr(i + 1);
	}
}


int main()
{
	cout<<"Nhap vao so n: ";
	cin>>N;
	zero_expr(1);
    cout<<"\n Bieu thuc zezo la : "<<endl;
	for (int i = 0; i < dem; i++)
		cout<<M[i]<<endl;
	
	return 0;
}