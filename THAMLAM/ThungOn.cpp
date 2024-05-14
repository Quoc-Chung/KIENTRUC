/*
   6  6 
   3 2 5 1 4 3 

   Thung 1 : (5,1)
   Thung 2 : (4,2)
   Thung 3 : (3,3)

*/

#include<bits/stdc++.h>
using namespace std;

int Tong_Thung(vector<int> vt ){
    int tong  = 0; 
    for (int i= 0;i<vt.size();i++){
        tong+= vt[i];
    }
    return tong; 
}
int main(){

    int kt_Thung, n;
    cin >> kt_Thung >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int Dem_Thung = 1;
    /* =- Vì chúng ta không biết trước được số thùng phải dùng nên chúng ta sẽ sử dụng vector = */
    vector< vector<int> > Thung; 
    sort(a,a+n, greater<int>());
    
   for(int i=0;i<n;i++){
       /* - Thằng a[i] chưa được đưa vào trong thùng - */
       bool check = false; 
       for(int j = 0;j < Thung.size(); j++){
            if((Tong_Thung(Thung[j]) + a[i]) <= kt_Thung){
                Thung[j].push_back(a[i]);
                check = true;
                
            }
            else{
                Thung[j+1].push_back(a[i]);
                Dem_Thung ++;
                check = true;
            }


       }
    }
    cout<<Dem_Thung<<endl;
}