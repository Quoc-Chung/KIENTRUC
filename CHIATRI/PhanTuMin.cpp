#include<bits/stdc++.h>
using namespace std;
int FindMin( int a[] ,int left,int right){
    if(left == right ){ 
        return a[left]; // Phần tử duy nhất
    }
    else {
        int mid  = (left + right )/2;
        int x = FindMin(a,left,mid); 
        int y = FindMin(a,mid+1,right);
        
        return min(x,y);
    }
}
int main (){
   int n;
   cout << "\nNhap n :";
   cin >>n;
   int *a= new int[n];
   for (int i=0;i<n;i++){
    cin >> a[i];
   }
   int min = FindMin(a,0,n-1);
   cout <<"\nPhan tu min la : "<< min << endl; 
}