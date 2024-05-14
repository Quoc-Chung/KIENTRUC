#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
     return (double)a.second / a.first > (double)b.second / b.first;
    // return (double)a.second  > (double)b.second; 
}

int main() {
    int n, Size_Balo;
    cin >> n >> Size_Balo;

    pair<int, int> *a = new pair<int, int>[n];

    vector<pair<int,pair<int,int>> > kq; 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    cout << "Sau khi sap xep la: " <<endl; 
    for(int i=0;i < n ;i++){
        cout << a[i].first << " "<< a[i].second<<endl;
    }
   
    int Gia_Tri_Max = 0;
    for (int i = 0; i < n; i++) {
        if (Size_Balo > 0) {
            int So_Lan =  Size_Balo / a[i].first;
            Gia_Tri_Max += So_Lan  * a[i].second;
            kq.push_back({So_Lan ,{a[i].first, a[i].second}});
            Size_Balo -= ( So_Lan* a[i].first);
        }
    }

    cout << " Gia tri max lay duoc  : " << Gia_Tri_Max << endl; 
    cout<< "Cac do vat can lay : "<<endl; 
    for(auto x : kq){
        cout  <<" So lan : "<< x.first <<" lay do co kich thuoc ;"<<x.second.first << "  trong luong " << x.second.second<<endl; 
    }

    delete[] a; // Giải phóng bộ nhớ
    return 0;
}

/*


4 37 
15 30 
10 25
2  2
4  6

83 



*/ 