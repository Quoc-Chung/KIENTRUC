#include<bits/stdc++.h>
using namespace std;
/* - Nhap so dinh - */
int n;
/* - Mang chua ma tran - */
int a[1001][1001];

/* - Luu canh bang vector<pair>  - */
vector<pair<int,int>> vt;
int main(){
   cin >> n; 
   for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        cin >> a[i][j];
    }
   }
   for (int i=1;i<=n;i++){
    for (int j=1;j<n;j++){
        if(a[i][j] ==1 && i< j){
            vt.push_back({i,j});
        }
    }
   }
   for (auto x: vt){
    cout << x.first << " "<<x.second << endl;
   }
}