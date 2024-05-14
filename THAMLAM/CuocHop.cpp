#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> *a = new pair<int, int>[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    // Sắp xếp các cặp số theo thời gian bắt đầu tăng dần
    sort(a, a + n);

    vector<pair<int, int>> result;

    // Chọn các cuộc họp không gây trùng lặp về thời gian
    int end_time = -1;
    for (int i = 0; i < n; i++) {
        if (a[i].first >= end_time) {
            result.push_back(a[i]);
            end_time = a[i].second;
        }
    }

    // In ra các cuộc họp có thể diễn ra
    cout << "- Co toi da " << result.size() << " cuoc hop co the dien ra:" << endl;
    for (auto meeting : result) {
        cout << meeting.first << " " << meeting.second << endl;
    }

    delete[] a; // Giải phóng bộ nhớ

    return 0;
}


/*
8 
0  6
1  4
3  5
3  8
4  7
5  9 
6  10
8  11

- Có tối đa 3 cuộc họp có thể diễn ra : 
1   4 
4   7 
8   11

*/ 