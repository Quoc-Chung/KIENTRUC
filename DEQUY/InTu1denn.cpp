#include<bits/stdc++.h>
using namespace std;
void InThongTin (int n,int i=1){
    if( i>n){
        return;
    }
    else {
       cout << i<<" ";
       InThongTin(n, i+1);
    }
}
void  InThongTin1(int n){
    if(n <=0){
        return ;
    }
    else{
        cout<<n<<" ";
        InThongTin1(n-1);
    }
}
int main(){
   int n =5;
   int  x =n;
   InThongTin(n);
   cout << endl;
   InThongTin1(x);
   return 0;
}