#include<bits/stdc++.h>
using namespace std;
/* - n là số đỉnh , m là số cạnh */
int n,m;
vector <int> adj[1001];
/* adj[i] sẽ lưu danh sách kề của đỉnh i */
int main(){
    cin >> n >> m; 
    for (int i=0;i< m;i++){
       int x,y;
       cin >> x >> y;
       adj[x].push_back(y);
       adj[y].push_back(x);
    }
/* 
- chõ này Nhập 1 2 : 
-> Thêm 2 vào danh sách cạnh của 1  
-> Thêm 1 vào danh sách cạnh của 2
*/
    
    for (int i = 1;i<=n;i++){
        cout <<i<<" : ";
        for (int j=0;j<adj[i].size();j++){
          cout  << adj[i][j]<<" "; 
        }
        cout<<endl;
    }
}