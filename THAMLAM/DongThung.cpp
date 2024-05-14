#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int TongMang(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
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






/*

B =6 

N = 6 
6
6
3 2 5 1 4 3 



Thung 1: 5 1
Thung 2: 4 2
Thung 3: 3 3

Vay co tat ca :3  thung.
*/




