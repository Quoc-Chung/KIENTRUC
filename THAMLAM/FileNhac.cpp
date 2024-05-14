#include<bits/stdc++.h>
using namespace std;
// BÀi toán chọn file nhạc  
int main(){
    int m,n;
    cin >> n>>m;
    int *a = new int[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int result =0;
    int i =0;
    while(m > 0){
        result += a[i];
        i++;
        m -= result;
    }
    cout<<i<<endl;
}