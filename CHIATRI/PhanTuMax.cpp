#include<bits/stdc++.h>
using namespace std;
int FindMax( int a[] ,int left,int right){
    if(left == right ){ 
        return a[left]; // Phần tử duy nhất thì 
    }
    else {
        int mid  = (left + right )/2;
        int x = FindMax(a,left,mid); 
        int y = FindMax(a,mid+1,right);
        
        return max(x,y);
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
   int min = FindMax(a,0,n-1);
   cout <<"\nPhan tu min la : "<< min << endl; 
}
