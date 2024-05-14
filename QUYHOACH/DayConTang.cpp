#include<bits/stdc++.h>
using namespace std;
#define N 1000
#define inf 9999999
int a[N + 3], dp[N+3], vet[N+ 3];

vector<int> res;
int n;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    a[0] = -inf, a[n+1] = inf; // Di chuyển câu lệnh ra ngoài vòng lặp
    /*- KET QUA CUA HAI BAI TOAN CON BAN DAU = */
    dp[0] = 1, dp[1] = 2; // Khởi tạo dp[1] là 1
    for(int i =2; i<=n+1 ; i++){
       for(int j=0;j<i;j++){
            if(a[j]< a[i] && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
                vet[i] = j; 
            }
       }
    }
    cout<< dp[n+1] - 2 <<endl;
    for(int i=n+1;i> 0;i=vet[i]){
        res.push_back(a[i]);
    }
    for(int i=res.size() -1 ; i > 0 ;i--){
        cout<< res[i]<<" ";
    }
    return 0;
}
/*
12
4 1 3 7 8 5 6 2 7 4 10 6


6
1 3 5 6 7 10 
*/