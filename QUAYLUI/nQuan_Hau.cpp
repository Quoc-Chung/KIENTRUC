#include<bits/stdc++.h>
#define n 8
using namespace std;

int queen[n] = {0};
void Xuat(){
    for (int i = 0;i<n;i++){
        for (int j =0;j<n;j++){
            /* Với hàng i thì quan hậu ở cột j */
            if(queen[i] == j){
                cout <<" * "; 
            }
            else{
                cout << " 0 ";
            }
        }
        cout << endl;
    }
    cout<<"\nBan co muon xem kq tiep theo : ";
    if(getchar() == 'y'){
        cin.ignore(1);
        cout<<"==============";
    }
    else{
        exit(1);
    }
}
bool Co_The_Dat(int i,int j){
   for (int k = 0;k < i;k++){
    /* - Nếu nó vi phạm - */
      if(queen[k] == j || abs(k- i) ==abs(queen[k] - j) ){
        return false;
      }
   }
   return true; 
}
/* - Với mỗi cái idx thì ta sẽ đặt nó trên một dòng - */
void Dat_Quan_Hau(int idx){
    for (int j =0;j < n;j++){
        if(Co_The_Dat(idx,j)){
           /*- Đặt 1 quân hậu vào vị trí cột j của hàng idex - */ 
           queen[idx] = j; 
           /* = No cung coi như một bước để đánh dấu */

           /* - Nếu idx tìm đủ tất cả các hàng - */
           if(idx == n -1){
             Xuat();
           }
           else{
            /* -Nhảy xuống hàng tiếp theo = */
            Dat_Quan_Hau(idx + 1);
           }
        }
    }
}

int main(){
    Dat_Quan_Hau(0);
}