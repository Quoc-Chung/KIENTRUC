#include<bits/stdc++.h>
using namespace std;
/* - n là số đỉnh , m là số cạnh - */
int n, m;
/* - Mảng dùng để lưu danh sách kề - */
vector <int> adj[1001];

/* - Mảng check đã thăm chưa - */
bool visited[1001];

void input(){
    cin >> n >> m;
    for (int i=0;i<m;i++){
        int x,y;
        cin >> x >> y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    /* - Chưa có đỉnh nào được check - */
    memset(visited,false,sizeof(visited));
}
void DFS (int u){
    cout << u<<" ";
    /* - Đánh dấu là u đã được thăm - */
    visited[u] = true;
    for (auto v : adj[u]){
          /* - Nếu đỉnh v chưa được thăm - */
          if(visited[v] == false){
              DFS(v);
          }
    }
}
int main(){

    input();
    DFS(1);

}
/*
    9  9 
    1 2
    1 3 
    1 5
    2 4
    3 6
    3 7 
    3 9
    5 8
    8 9
*/