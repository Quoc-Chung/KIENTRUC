#include<bits/stdc++.h>
using namespace std;
int main() {
        int a[6] = {10000,20000,40000,50000,100000};
        priority_queue<int> q;
        for(auto x: a) {
            q.push(x);
        } 
        int count = 0;

        int n;
        do {
        cout << "Nhap n chan den 1000: ";
        cin >> n;
        } 
        while (n % 10000 != 0);

        int TongTien = 0; 

        vector <pair<int,int> > Tien;
        while(n > 0) {
            int tmp  = q.top();
            q.pop();

            int sototien = n / tmp;
            count += sototien;
            TongTien += tmp * sototien; 
            Tien.push_back({tmp,sototien});
            n -= tmp * sototien; 
        }
        cout << count << endl;
        for (auto x : Tien){
            cout << x.first <<"  "<< x.second <<endl; 
        }  
    return 0;
}
