#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int length[n];
    int Do_Dai_Max = 0; 
    /* - Côi mõi phần tử là một dãy tăng đần độ dài 1 - */ 
    for(int i=0;i<n;i++){
        length[i] =1;
    } 
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
    /* - Chỉ số sau > chỉ số trước */
            if(a[i] > a[j]){
              length[i] = max(length[i] , length[j] + 1);
            }
        }
       Do_Dai_Max = max(Do_Dai_Max, length[i]);

    }
    cout << Do_Dai_Max << endl;

}