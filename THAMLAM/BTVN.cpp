#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n , s ;
    cin >> n >> s; 
    int *a= new int[n]; 
    for (int i=0;i<n;i++){
        cin >> a[i]; 
    }
    sort(a,a+n); 
    int dem =0;
    for (int i = 0;i<n;i++){
        if(s <a[i]){
            break;
        }
        dem++;
        s += a[i];
    }
    cout <<dem<<endl;
}