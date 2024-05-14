#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int Tinh_To_Hop(int n, int k) {
    for (int i = 0; i <= n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    return a[n][k];
}
int main() {
    int n, k;
    cout << "Nhap k va n: ";
    cin >> k >> n;
    cout << "To hop C_k_n"<<Tinh_To_Hop(n, k) << endl;
    return 0;
}
