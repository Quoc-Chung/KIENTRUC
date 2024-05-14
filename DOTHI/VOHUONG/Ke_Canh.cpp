#include<bits/stdc++.h>
using namespace std;
/* - Nhap so luong dinh -*/
int n;
/* - Tạo vector luu cac cạnh -*/
vector<pair<int,int> > edge;
int main(){
   cin >> n;
   cin.ignore();
   for (int i=0;i<=n;i++){
    string s,num ;
    getline(cin,s);
    stringstream ss(s);
    while(ss >> num ){
        /* - Tranh bi lap canh -*/
        if(i < stoi(num)){
            edge.push_back({i,stoi(num)});
        }
    }
   }
   for  ( auto it: edge){
      cout << it.first <<" "<< it.second << endl;
   }
}
/* 
5 
2 3 4
1 3 4 5
1 2 4 5
1 2 3 5
2 3 4


*/