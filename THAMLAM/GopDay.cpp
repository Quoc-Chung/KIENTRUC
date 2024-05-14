#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arrays = {
        {2, 5, 8, 12},
        {3, 6, 9, 10},
        {4, 7, 11, 13}
    };
    vector<int> result;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < arrays.size(); i++) {
        if (!arrays[i].empty()) {
            pq.push({arrays[i][0], i});
        }
    }

    while (!pq.empty()) {
        pair<int, int> tmp = pq.top();
        pq.pop();
        result.push_back(tmp.first);
        if (tmp.second + 1 < arrays[tmp.second].size()) {
            pq.push({arrays[tmp.second][tmp.second + 1], tmp.second + 1});
        }
    }

    cout << "Day sau khi sap xep :" << endl;
    for (int tmp : result) {
        cout << tmp << "  ";
    }
    return 0;
}
