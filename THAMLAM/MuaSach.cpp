 #include<bits/stdc++.h>
 using namespace std;
int swap (int &a , int  &b){
    int tmp = a;
    a= b; 
    b = tmp;
}
int main (){
     int n;
     cin >> n; 
     int  a[1005]; 
     int ans = 0 ;
     for  (int i = 1; i <= n; i++){
         cin >> a[i]; 
     }
     for (int i =1;i<= n; i++){
        for (int j =i+1; j <=n ;j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]); 
            }
        }
     }
     for (int i = 1;i <=n;i++){
        /* - Ở vị trí thứ 3 thì chúng ta không làm gì  hết  -*/
         if( i % 3 == 0){
           continue;
         }
         ans+= a[i];
     }
     cout << ans;

}