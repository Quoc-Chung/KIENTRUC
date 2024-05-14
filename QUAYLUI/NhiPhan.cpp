#include<bits/stdc++.h>
using namespace std;
/* - Lưu trữ cấu hình - */
int a[11];
/* - Kích thước cấu hình - */
int n;
void IN_RA_CAU_HINH(){
    for(int i=1;i<=n;i++){
        cout <<a[i];
    }
    cout<<endl;
}
void Try(int i){
    for (int j=0;j<=1;j++){
        a[i] =j;
        if(i == n){
            IN_RA_CAU_HINH();
        }
        else{
            Try(i+1);
        }
        
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
      cin >> n;
      Try(1);
    }
}
