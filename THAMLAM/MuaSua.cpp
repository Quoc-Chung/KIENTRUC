#include<bits/stdc++.h>
using namespace std;
// struct CompareSecond{
//    bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
//    return left.second < right.second;
//    }
// };

// int main(){
//     /* - N là số lượng sữa phải mua -*/
//     int N , M; 
//     cin >> N >> M;   
//     // priority_queue<pair<int, int>, vector<pair<int, int>>, CompareSecond> p; 
//     priority_queue<pair<int,int> , vector<pair<int ,int>>, greater<pair<int,int>> > p;
//     for (int i=0;i<M ;i++){
//         int tmp1,tmp2;
//         cin >> tmp1>>tmp2;
//         p.push({tmp1,tmp2});
//     }
//     cout <<"TEST :"<<endl;
//     // while (!p.empty()){
//     //    pair<int,int> tmp = p.top();
//     //    p.pop();
//     //    cout<< tmp.first<<"  "<<tmp.second<<endl;
//     // }

//     int TongTien = 0; 
//     int DaMua =0;
//     while (DaMua < N){
//       pair<int,int> tmp = p.top();
//       p.pop();
 
//       if(DaMua + tmp.second > N){
//          tmp.second = N - DaMua;
//       }
//        cout << tmp.second <<endl;

//        DaMua += tmp.second;
//        TongTien+= tmp.first * tmp.second;
//     }
//     cout<< TongTien<<endl;
// }
int main(){
    int N , M; 
    cin >> N >> M; 
    pair<int,int> *a = new pair<int,int>[M];

    for(int i=0;i<M;i++){
        cin >> a[i].first >> a[i].second;
    }
    int Tong_Tien = 0,Da_Mua =0;
    // Sắp xếp tăng dần theo giá 
    sort(a,a+M);
    for (int i = 0; i< M;i++){
        if(N - Da_Mua < a[i].second){
            a[i].second = N -Da_Mua;
        }
        Da_Mua += a[i].second;
        Tong_Tien += a[i].first * a[i].second;

    }
    cout <<Tong_Tien <<endl;
}


/*
100 5 
3  10
5  20
6  30
9  40
8  80
=> 10*3  + 20 * 5 + 30 * 6 + 40 * 8  
    30      100      180      320   = 630 

*/