#include<bits/stdc++.h>
using namespace std;
int  n; 
/* - Tạo cấu hình - */
int x[20];
int b[1000001];
/* - 
Duyệt các phần tử chạy từ 1 đến n -*/
void Xuat(){
   for(int i=1;i<=n;i++){
     cout << x[i] <<" ";
   }
   cout << endl;
}

void HoanVi (int i){
    for (int j = 1;j <= n;j++){
        /* - Nếu một số chưa được đưa vào cấu hình - */
          if(b[j] == 0){
            x[i] =  j; 
        /* - Sau khi đưa vào cấu hình thì nó sẽ đánh dấu -*/
            b[j] = 1; 
        /* - Tức là nó chạy quá tức là đã đủ cấu hình = */
            if(i == n){
                Xuat();
            }
            else{
                HoanVi(i+1);
            }
            b[j] = 0;
          }
    }
}
int main (){
  cin >> n; 
  memset(0 , 10000001, sizeof(b));
  HoanVi (1);

}