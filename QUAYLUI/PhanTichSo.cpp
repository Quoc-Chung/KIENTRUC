#include<bits/stdc++.h>
using namespace std; 
int n;
int a[10];

void out (int i){
    for (int k =1 ;k<= i;k++){
       cout << a[k] << " "; 
    }
    cout<<endl;
}
void Try (int i ,int k,int cursum ){
   /* - Duyệt từng khả năng được chấp nhận - */ 
    for (int j = k; j >= 1; j--){ 
       
        if(cursum + j <= n){
            a[i] = j ;
            cursum +=j; 
            if(cursum == n){
                  out(i);
            }
            else {
                  Try(i+1,j,cursum);
            }
      /* -Tái tạo bài toán */ 
            cursum -=j;    
        }
    }
}
int main(){
    int t;
    cin >> t; 
    while (t--){
        cin >> n; 
        Try(1,n,0);

    }
}
