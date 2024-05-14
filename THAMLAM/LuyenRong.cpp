#include<bits/stdc++.h>
using namespace std; 

int main () {
    int test;
    cin >> test;
    while (test--) {
        int s, n; 
        cin >> s >> n;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++) {
            int x1, x2;
            cin >> x1 >> x2; 
            pq.push({x1,x2});
        }
        while (!pq.empty()) { 
            pair<int, int> tmp = pq.top();
            if (s > tmp.first) {
                s += tmp.second;
                /* - Nếu mà tiêu diệt được mới xóa - */
                pq.pop();
            } else {
                break;
            }
        }

        if (pq.empty()) {
            cout << "YES" << endl;
        } else {
            cout <<"NO" << endl; 
            cout << pq.size() << endl;
        }
    }
    return 0;
}
