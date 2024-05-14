#include<bits/stdc++.h>
using namespace std;
/* - Tổ hợp chập k của n - */
int n; 
int k; 

int a[11];
void IN_RA_CAU_HINH(){
    for (int i=1;i<=k;i++){
        cout << a[i];
    }
    cout <<endl;
}
void Try(int i){
    for (int j = a[i-1] + 1 ; j<=n-k+i;j++){
        a[i] = j;
        if(i ==k){
           IN_RA_CAU_HINH();  
        }
        else {
            Try(i+1);
        }
    }
}
int main(){

   cin >> n>>k;
   cout<<"\nCac cau hinh hoan thanh:"<<endl;
   Try(1);
   return 0; 
}