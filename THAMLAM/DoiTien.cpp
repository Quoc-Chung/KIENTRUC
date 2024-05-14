#include<bits/stdc++.h>
using namespace std; 
int main (){ 
         int n; 
         cin >> n;
         int a[5] = { 100000, 50000,40000,20000,10000};
         int count = 0;
         for (int i=0;i<5;i++){
            count+= n/a[i];
            n %= a[i];
         }
         cout << count;
}
