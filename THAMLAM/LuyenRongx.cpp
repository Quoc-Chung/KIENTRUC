#include<bits/stdc++.h>
using namespace std;
#define N 1000
int main(){
    int s, n; 
    cin >> s >> n; 

    pair < int,int> a[N+3]; 
    for (int i=0;i<n;i++){
       cin >> a[i].first >> a[i].second;
    }
    int d =0;
    /* - Sap xep tang dan -*/ 
    sort(a,a+n); 

    /* - Sap xep giam dan - */
    sort(a, a+n, greater <pair<int,int>> ());
    
    for (int i=0;i<n;i++){
        if(s <= a[i].first){
            break;
        }
        s+= a[i].second;
        d++;
    }
    if(d == n){
        cout<<"YES"<<endl;
    }
    else {
        cout <<"NO"<<endl; 
        cout<< n-d<<endl;
    }
    return 0;
}