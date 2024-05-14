#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    // So sánh tỷ lệ giá trị của hai cặp số và sắp xếp theo thứ tự giảm dần
    return (double)a.second / a.first > (double)b.second / b.first;
}
int main(){
    int n , cap;
    cin >> n >> cap;
    pair<int, int> *a = new pair<int, int>[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    // Sắp xếp các cặp số theo thời gian bắt đầu tăng dần
    sort(a, a + n, cmp );
    int GiaTri_Max = 0;
    for(int i=0;i<n;i++){
        if(cap - a[i].first < 0 ){
            break;
        }
       GiaTri_Max += a[i].second;
       cap -=a[i].first;
    }
    cout << GiaTri_Max <<endl;
}

/*
5  15 
12  4
2   2
1   1
1   2
4   10

15 

4  10
1  2 
2  2 
1  1
12 4


*/