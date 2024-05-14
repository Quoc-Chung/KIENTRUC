#include<bits/stdc++.h>
using namespace std;
// length[i] lưu trữ độ dài max của dãy con từ đầu đến vị trí i 
int a[100], length[100], prev_index[100], n, max_length, end_index;

int main() {
    cin >> n;
    // Nhập các phần tử của mảng
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Khởi tạo mảng length và prev_index
    for(int i = 0; i < n; i++) {
        length[i] = 1;       // Mỗi phần tử ban đầu là một dãy con có độ dài là 1
        prev_index[i] = -1;  // Không có phần tử trước đó
    }

    max_length = 0; // Khởi tạo độ dài lớn nhất của dãy con tăng

    end_index = 0;  // Vị trí kết thúc của dãy con tăng

    // Tính độ dài dãy con tăng lớn nhất và truy vết
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) { // Kiểm tra nếu phần tử đằng trước nhỏ hơn phần tử hiện tại
                if(length[j] + 1 > length[i]) { // Nếu dãy con kết thúc tại a[j] có độ dài lớn hơn
                    length[i] = length[j] + 1;  // Cập nhật độ dài dãy con tại vị trí i
                    prev_index[i] = j;          // Lưu vị trí phần tử trước đó
                }
            }
        }
        // Cập nhật độ dài lớn nhất và vị trí kết thúc của dãy con tăng
        if(length[i] > max_length) {
            max_length = length[i];
            end_index = i;
        }
    }

    // In ra độ dài lớn nhất của dãy con tăng
    cout << "Do dai lon nhat cua day con tang: " << max_length << endl;

    // Truy vết và in ra dãy con tăng
    cout << "Day con tang co do dai lon nhat: ";
    stack<int> Day_Tang;
    int current_index = end_index;
    while(current_index != -1) {
        Day_Tang.push(a[current_index]);
        current_index = prev_index[current_index];
    }
    while(!Day_Tang.empty()) {
        cout << Day_Tang.top() << " ";
        Day_Tang.pop();
    }
    cout << endl;

    return 0;
}

/* 

12
4   1  3   7   8   5  6  2  7  4  10   6 
*/

