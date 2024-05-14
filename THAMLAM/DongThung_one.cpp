#include<bits/stdc++.h>
using namespace std;
int Tong(vector<int> &X){
    int tong = 0;
    for (int i = 0;i<X.size();i++){
        tong+= X[i];
    }
    return tong;
}
void SoThung(int *a,int n,int B){
    int SoThung = 0;
    vector<vector<int>> ThungChua;

    /* - Sap xep cac thung giam dan - */
    sort(a,a+n,greater<int>()); 

    for (int i = 0;i<n;i++){
         bool check = false;
          
        for (int j = 0;j< SoThung;j++){
            if(Tong(ThungChua[j]) + a[i] <= B){
                ThungChua[j].push_back(a[i]);
                check = true;
            }
        }
         /* - Nếu mà không có thùng chứa nào thỏa  - */
         if(check == false){
            ThungChua.push_back({a[i]});
            SoThung ++; 
         }
    }
     for (int i = 0; i < SoThung; i++) {
        cout << "Thung " << i + 1 << ": ";
        for (int j = 0; j < ThungChua[i].size(); j++) {
            cout << ThungChua[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<"So thung tat ca la :"<<  SoThung<<endl; 
    
}

int main(){
    int B,N;
    cin >> B >> N;
    int *a= new int[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    SoThung(a,N,B);
}