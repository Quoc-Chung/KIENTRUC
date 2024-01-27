#include<bits/stdc++.h>
using namespace std;
bool KiemTraNgoacDung(string s){
     stack<char> st;
       for(char c:s){
      if(c=='(' or c=='[' or c=='{') st.push(c);
       else if (c==')') {
    if(st.empty() or st.top()!='(') {
      return false; break;
    }
     else st.pop();
    }
  else if (c==']') {if(st.empty() or st.top()!='[') {return false; break;} else st.pop();}
  else if (c=='}') {if(st.empty() or st.top()!='{') {return false; break;} else st.pop();}
       }
  if(st.size()) return false;
  return true;
}

int main(){
    int t;
    cin >> t;
        while(t--){
            string s;
            cout<<"\nNhap chuoi : " ;
            cin.ignore();
            getline(cin, s);
            bool check =KiemTraNgoacDung(s);
            if(check){
                cout<<"\nDUNG";
            }
            else{
                cout<<"\nSAI";
            }
        }
}