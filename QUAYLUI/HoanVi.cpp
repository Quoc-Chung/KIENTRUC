#include<bits/stdc++.h>
using namespace std;
/* - Mảng lưu trữ cấu hình - */
int a[11];
/* - Kích thước cấu hình - */
int n; 
/* - Mảng check kiểm tra xem giá trị đã được sử dụng chưa - */
int check[11] = {};

void IN_RA_CAU_HINH(){
   for (int i=1;i<=n;i++){
    cout << a[i];
   }
   cout<<endl;
}
/* - Sau mỗi lệnh if đánh dấu thì ta phải đánh dấu lại - */
void Try(int i){
   for (int  j =1; j<= n ;j++){
       if(check[j] ==0){
          check[j] = 1; 
          a[i] = j;

          if( i == n){
            IN_RA_CAU_HINH();
          }
          else{
            Try(i+1);
        }
        check[j] = 0;  
       }
   }
}
int main(){
   int t;
   cin >> t;
   while(t--){
      cin >> n;
      cout << "Cac hoan vi cua n la : "<<endl;
      Try(1);
   }
}


