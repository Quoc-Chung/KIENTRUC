#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int result = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push(a[i]);
        }
        /*-  Trong pq chỉ còn sợi dây cuối cùng sau khi nối -*/
        while (pq.size() > 1) { 
            int tmp1 = pq.top();
            pq.pop();

            int tmp2 = pq.top();
            pq.pop();

            result += tmp1 + tmp2;
            pq.push(tmp1 + tmp2); 
        }
        cout << result << endl;
    }
    return 0;
}

/*
2
4
4 3 2 6
5
4 2 7 6 9

*/