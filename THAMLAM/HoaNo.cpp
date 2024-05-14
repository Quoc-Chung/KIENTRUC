#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >>n; 
    
    int *a= new int[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1,greater<int>());   
    int Ngay_No_Som_Nhat =0;
    for (int i=1;i<=n;i++){
        int tmp = i + a[i];
        Ngay_No_Som_Nhat = max(tmp, Ngay_No_Som_Nhat); 
    }
    cout<< Ngay_No_Som_Nhat + 1<<endl;
}