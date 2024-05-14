#include<bits/stdc++.h>
using namespace std;
int x[20];
int n;
void Output(){
    for (int i=0;i<n;i++){
        cout<<x[i] << " ";
    }
    cout <<endl;
}
void  BackTracking(int i){
   for(int j =0;j<=1;j++){
    x[i] = j;
    if(i == n){
        Output();
    }
    else {
        BackTracking(i+1);
    }
   }
}
int main(){
    cin >> n;
    BackTracking(1);

}