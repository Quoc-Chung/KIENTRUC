#include<bits/stdc++.h>
using namespace std;
int n, Tong;
int a[100], v[100];
vector<vector<int> > vt; 
void Try(int i){
    for(int j = 0; j <= 1; j++){
         a[i] = j;
         if(i == n){
            int cursum = 0;
            for(int k = 0; k < n; k++){
                if(a[k] == 1){
                    cursum += v[k];
                    
                }
            }
            if(cursum == Tong){
                        vector<int> tmp;
                        for(int l = 0; l < n; l++){
                            if(a[l] == 1){
                                tmp.push_back(v[l]);
                            }
                        }
                        auto it = find(vt.begin(), vt.end(), tmp);

                        if (it == vt.end()) {
                            vt.push_back(tmp);
                           
                        }  
                    }
         }
         else{
            Try(i + 1);
         }
    }
}
int main(){
    cin >> n >> Tong;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    Try(1);
    for(int i = 0; i < vt.size(); i++){
        for(int j = 0; j < vt[i].size(); j++){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
7   12 
8   6   7   5   3   10    9  



*/