#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}
int TongMang(vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}
int DongThung(int *a, int n, int B) {
    sort(a, a + n, cmp); 
    int SoThung = 0;
  
    vector<vector<int>> Thung;
    for (int i = 0; i < n; i++) {

        bool TimThay = false;
        for (int j = 0; j < SoThung; j++) {
            if (TongMang(Thung[j]) + a[i] <= B) {
                Thung[j].push_back(a[i]);
                TimThay = true;
                break;
            }
        }
        if (TimThay== false) {
            Thung.push_back({a[i]});
            SoThung++;
        }
    }
   
    for (int i = 0; i < SoThung; i++) {
        cout << "Thung " << i + 1 << ": ";
        for (int j = 0; j < Thung[i].size(); j++) {
            cout << Thung[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"\nVay co tat ca :"<< SoThung<<"  thung."<<endl;
}

int main() {
        int B,n;
        cin >> B;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        DongThung(a, n, B);
    return 0;
}
