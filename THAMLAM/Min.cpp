#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
          int n;
          cin >> n;
          map<char ,int> mp;
          string s;
          cin.ignore();
          getline(cin ,s); 
          for (auto x: s){ 
            mp[x]++;
          }
          priority_queue<int> pq;
          for (auto x:mp){
            pq.push(x.second);
          }
          while(n > 0){
            int tmp = pq.top();
            pq.pop();
            tmp-=1;
            pq.push(tmp);
            n--;
          }
          int result =0;
          while(!pq.empty()){
             result += pow(pq.top(),2);
             pq.pop();
          }
          cout<< result<<endl;
           
    }
}