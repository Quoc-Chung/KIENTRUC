#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Hàm số sánh cho việc sắp xếp các file theo dung lượng tăng dần
bool compareFileSize(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}
// Hàm tham lam để chọn và ghi file vào đĩa từ
void GreedyFileOnTape(vector<pair<int, int>> &files) {
    // Sắp xếp các file theo dung lượng tăng dần bằng cách sử dụng hàm số sánh
    sort(files.begin(), files.end(), compareFileSize);

    cout << "Cach luu tru file voi chi phi nho nhat: ";
    // Duyệt qua từng file và ghi vào đĩa từ theo thứ tự đã sắp xếp
    for (int i = 0; i < files.size(); ++i) {
        cout << files[i].first << " "; // Ghi chỉ số của file vào đĩa từ
    }
    cout << endl;
}

int main() {
    // Khởi tạo vector chứa thông tin về các file
    vector<pair<int, int>> files = {{1, 5}, {2, 4}, {3, 6}};

    // Gọi hàm tham lam để chọn và ghi file vào đĩa từ
    GreedyFileOnTape(files);

    return 0;
}
