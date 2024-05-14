#include<bits/stdc++.h>
using namespace std;
struct Comparator{
    bool operator()(pair<int,int> tmp1, pair<int,int> tmp2){
        return ((double)tmp1.second/tmp1.first) < ((double)tmp2.second/ tmp2.first);
    }
};
int main(){
    /* - n là số lượng dòng , m là kích thước balo - */
    int n ,m; 
    cin >> m >> n; 
    priority_queue<pair<int,int> , vector<pair<int,int> > , Comparator> pq;
    for (int i=0;i<n;i++){
       int x, y; 
       cin >> x >> y; 
       pq.push({x,y});
    }
   
    int GiaTriMax = 0;
    while (m >= 0 && !pq.empty()) {
        pair<int, int> tmp = pq.top();
        pq.pop();
        if (tmp.first <= m) {
            int SoLuong = m / tmp.first;
            GiaTriMax += SoLuong * tmp.second;
            m %= tmp.first;
        }
    }
    cout << GiaTriMax<<endl;
    
}