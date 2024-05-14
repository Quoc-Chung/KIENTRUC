#include<bits/stdc++.h>
using namespace std;
int n;
/* - Tu ma tran sang canh -*/
int a[1001][1001];
vector<int> vt[1000];

int main(){
  cin >> n;
  for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        cin >> a[i][j];
    }
  }
  for (int i=1;i<=n;i++){
     for (int j=1;j<=n;j++){
        if(a[i][j]==1){
            vt[i].push_back(j);
        }
     }
     
  }
  for (int i=1;i<=n;i++){
    cout << i<<" : ";
    for (auto x : vt[i]){
       cout << x << "  ";
    }
    cout <<endl;
  }
}
/* 
5
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0


*/