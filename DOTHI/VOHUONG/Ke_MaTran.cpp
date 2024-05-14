#include<bits/stdc++.h>
using namespace std;
/* - Nhap vao so luong dinh -*/
int n;
int a[1001][1001];
int main (){
    cin >> n; 
    cin.ignore();

   for (int i=0;i<=n;i++){
    string s,num;
    getline(cin,s);
    
    stringstream ss(s);
    while(ss >> num){
        a[i][stoi(num)] = 1;
        }
   }

   for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        cout << a[i][j]<<"  ";
    }
    cout << endl;
   } 
}
/*
5 
2 3 4
1 3 4 5
1 2 4 5
1 2 3 5
2 3 4
*/