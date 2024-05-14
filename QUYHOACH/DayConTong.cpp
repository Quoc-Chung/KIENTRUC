#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int dp[s+1];
    for (int i=0;i<=s;i++){
        dp[i] = 0;
    }
    dp[0] = 1;
    for(int i = 0;i<n;i++){
        for(int j = s;j>=a[i];j--){
            if(dp[j - a[i]] == 1){
                dp[j] = 1;
            }
        }
    }
    cout<< dp[s] << endl;

}
/*
4 7 
2 5 4 1

*/