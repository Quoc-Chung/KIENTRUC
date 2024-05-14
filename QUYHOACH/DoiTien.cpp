#include<bits/stdc++.h>
using namespace std;
int SoToNhoNhat(int Tien[],int m,int n) {
    int dp[n+1];
    dp[0] =0; 
    for (int i = 1; i<=n;i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j<m; j++) {
            if (Tien[j]<=i && dp[i - Tien[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i-Tien[j]] + 1);
            }
        }
    }
    return dp[n]; 
}
int main() {
    int m,n;
    do{
    cout << "Nhap so tien can doi: ";
    cin >> n;
    }
    while (n% 100 != 0);
    cout << "Nhap so loai tien: ";
    cin >> m;
    int Tien[m];
    cout << "Nhap cac loai tien: ";
    for (int i = 0; i < m; i++) {
        cin >> Tien[i];
    }
    int result = SoToNhoNhat(Tien, m, n);
    cout << "So to tien doi it: " << n  << result << endl;
    return 0;
}

     

