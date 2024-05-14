#include<bits/stdc++.h>
using namespace std;
/* - n là số đỉnh, m là số cạnh -*/
int n,m;
/* -Mang dung de luu cac dinh cua danh sach ke - */
vector<int> adj[1001];
/* - Mảng kiểm tra việc thăm - */
bool visited[1001];
void Input(){
     cin >> n >> m;
     /* - Nhap danh sach canh va chuyen sang danh sach ke - */
     for (int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
     }
    /* - Đặt hết cái mảng thăm thành false -*/
    memset(visited,false,sizeof(visited));
}
void BFS (int u){
    /* - Tạo hàng đợi và push thằng đầu tiên vào -  */
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()){
        /* - Lấy ra thằng đầu tiên và duyệt những thằng xung quanh - */
        int v = q.front();
        q.pop();
        cout << v << " ";
        /* - Duyệt những thằng kề nếu thấy chưa thăm thì push vào hàng đợi -*/
        for (auto x: adj[v]){
            /* - Nếu mảng chưa được thăm - */
            if(visited[x] == false){
               q.push(x);
               visited[x]= true;
            }
        }

        
    }
}
int main(){
  Input();
  BFS(1); 
}
/* 
    10 11
    1 2
    1 3
    1 5
    1 10 
    2 4
    3 6
    3 7
    3 9
    6 7
    5 8
    8 9
*/