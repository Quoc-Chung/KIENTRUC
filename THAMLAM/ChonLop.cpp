#include<bits/stdc++.h>
using namespace std;

bool soSanhKetThuc(pair<int, int> a, pair<int, int> b) {
    return (a.second < b.second);
}

void chonMonHoc(vector<pair<int, int>>& monHoc) {
    /*  - Sắp xếp tăng dần theo thời gian kết thúc - */
    sort(monHoc.begin(), monHoc.end(), soSanhKetThuc);

    int n = monHoc.size();
    
    vector<pair<int, int>> tapHoc;
    tapHoc.push_back(monHoc[0]);
    int ketThucTruoc = monHoc[0].second;
    for (int i = 1; i < n; i++) {
        if (monHoc[i].first >= ketThucTruoc) {
            tapHoc.push_back(monHoc[i]);
            ketThucTruoc = monHoc[i].second;
        }
    }
   
    cout << "Tap mon hoc duoc chon :" << endl;
    for (int i = 0; i < tapHoc.size(); i++) {
        cout << "Mon hoc " << i + 1 << ": ";
        cout << "{" << tapHoc[i].first << ", ";
        cout << tapHoc[i].second <<" }"<< endl;
    }
}
int main() {
    int n;
    cin >> n; 
    int *S = new int[n]; 
    int *F = new int[n];
    vector<pair<int, int>> monHoc;
    for (int i=0;i<n;i++){
        cin >> S[i] >> F[i]; 
        monHoc.push_back({S[i],F[i]});
    }
    chonMonHoc(monHoc);
    return 0;
}
/*

Môn Bắt đầu Kết thúc

5
6 7
7 9
8 10
10 12
9 11 



6  7 
7  9
9 11


*/