
#include<bits/stdc++.h>
using namespace std;
// length[i] lưu trữ độ dài max của dãy con từ đầu đến vị trí i 
int a[100], length[100],vet[100],n, Do_Dai_Max;
int main(){
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    /* - Coi moi phan tu la mot day rieng biet - */
    for(int i=0;i<n;i++){
        length[i] = 1;
        vet[i] = -1;
    }

   int end_index = 0;
   for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            /* Số đằng sau nhỏ hơn số đằng trước */
            if(a[j] < a[i] ) {
                if(length[j] + 1 > length[i]) { // Nếu dãy con kết thúc tại a[j] có độ dài lớn hơn
                    length[i] = length[j] + 1;  // Cập nhật độ dài dãy con tại vị trí i
                    vet[i] = j;          // Lưu vị trí phần tử trước đó
                }
            }
        }
        /* Cập nhật độ dài tối đa */
        Do_Dai_Max = max(Do_Dai_Max, length[i]);
          if(length[i] > Do_Dai_Max) {
            Do_Dai_Max = length[i];
            end_index = i;
        }
   }
    cout << "\nDo dai max  : "<< Do_Dai_Max << endl;
    
}
/*

12
4 1 3 7 8 5 6 2 7 4 10 6

*/