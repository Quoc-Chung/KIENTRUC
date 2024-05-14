#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001][1001];
vector<pair<int, int>> edges;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            if (a[i][j] == 1) {
                edges.push_back({i, j});
            }
        }
    }
    // In danh sách cạnh
    for (auto edge : edges){
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}
/*
6 
0 1 1 1 0 0 
0 0 0 1 0 0 
0 0 0 1 1 1
0 0 0 0 0 1
0 0 0 0 0 1
0 0 0 0 0 0
    6 9 
    1 2
    1 3
    1 4
    2 4
    3 4
    3 5
    3 6
    4 6
    5 6  
*/