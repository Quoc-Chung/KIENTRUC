#include<bits/stdc++.h>
using namespace std;
int main(){
    /* - SẮp xếp tiền cần đổi này giảm dần = */
    int a[5] = {1,5,10,25,100};
    sort(a,a+5,greater<int>());

    int Tien_Can_Doi; 
    cin >> Tien_Can_Doi; 
    /*- Dùng map để lưu trữ những số tiền đã đổi -*/
    vector<pair<int,int>> vt; 

    int cents = 0;

    for(int i=0;i < 5;i++){
       if(Tien_Can_Doi  / a[i] > 0){
           cents += Tien_Can_Doi /a[i]; 
       
           vt.push_back({Tien_Can_Doi / a[i], a[i]});

           Tien_Can_Doi = Tien_Can_Doi % a[i];
       }

    }  
    cout << " Chung ta can phai su dung : "<< cents << " de doi" << endl;
    for (auto x : vt){
        cout << x.first <<"  "<< x.second<<endl; 

    }
}