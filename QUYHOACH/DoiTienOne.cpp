#include<bits/stdc++.h>
using namespace std;

vector<int> SoToNhoNhat(int coins[], int m, int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    vector<int> usedCoins(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX && dp[i - coins[j]] + 1 < dp[i]) {
                dp[i] = dp[i - coins[j]] + 1;
                usedCoins[i] = coins[j];
            }
        }
    }
    return usedCoins;
}

int main() {
    int m, n;
    cout << "Nhap so tien can doi: ";
    cin >> n;
    cout << "Nhap so loai tien: ";
    cin >> m;
    int coins[m];
    cout << "Nhap cac loai tien: ";
    for (int i = 0; i < m; i++) {
        cin >> coins[i];
    }
    vector<int> usedCoins = SoToNhoNhat(coins, m, n);
    cout << "So to tien đổi ít nhất: " << endl;
    for (int i = n; i > 0; ) {
        cout << usedCoins[i] << " ";
        i -= usedCoins[i];
    }
    return 0;
}
