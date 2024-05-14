#include<bits/stdc++.h>
using namespace std;
#define N 100
int main(){
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        /* - Khai báo độ cứng viên gạch - */
        int p; 
        /* - Khai báo độ cao viên gạch - */
        int h = 1;
        sort(a,a+n,greater<int>());
        p=a[0];
        for (int i=1; i< n;i++){
           if(p <= 0){
               break;
           }
           /* - Trường hợp đủ điều kiện xếp gạch - */
           else{
               h++;
               p = min(a[i],p-1);
           }

        }
        cout<<h<<endl;


    }
/*
3 
1 2 1   

6 
0 0 0 0 0 0

*/ 

