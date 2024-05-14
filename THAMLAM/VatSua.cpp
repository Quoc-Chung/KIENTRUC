#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin >>n;
        int *a= new int[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        /* - Sap xep giam dan -*/
        sort(a,a+n,greater<int>());
        int LuongSua = 0;
        for (int i=0;i<n;i++){
            if(a[i] - i <= 0){
                break;
            }
            LuongSua += (a[i] - i); 
        }
        cout << LuongSua<<endl; 
}

/* 
2
4
4 4 4 4

 
hieusuat = 0 ;
result = 4 - 0 =4;
hieusuat = 1 ;
resut  = 4 + 4 -1 =7  
hieusuat = 2; 
result = 7 + 4 - 2 =9; 
hieusuat = 3; 
result = 9 + 4 - 3 = 10  


4
2 1 4 3 

-> 4 3 2 1  
hieusuat  =0 ;
result = 4 - 0 =4 ; 
hieusuat = 1; 
result = 4 + 3 -1  = 6 
hieusuat = 2 ;
result = 6 +2 -2 

hieusuat = 3; 
result = 6 + (1-3)

*/