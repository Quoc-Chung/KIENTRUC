#include <iostream>
using namespace std;
void HinhVuong (int size, int check =1){
    if(check >size){
        return ;
    }
    for (int i =0;i<size;i++){
       cout<<"*"; 
    }
    cout<<endl;
    HinhVuong(size,check+1);
}
int main(){
  int n =3;
  HinhVuong(n);
  return 0;
}