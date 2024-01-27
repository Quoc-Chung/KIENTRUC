#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; 
    int dem =0;
    stack < pair<int,int> > st;
    for (int i=1;i<=n;i++){
        int x; 
        cin >> x; 
        while (st.size() && st.top().first < x){
           dem+= st.top().second;
           st.pop();
        }
        if(st.empty() ){
            st.push({x,1});
        }
        else{
            if(st.top().first ==x ){
                dem = dem + st.top().second;
                if(st.size()){
                    dem++;
                    st.top().second++;
                }
                else{
                    dem++;
                    st.push({x,1});
                }
            }
        }
    }
    cout<<dem;
}