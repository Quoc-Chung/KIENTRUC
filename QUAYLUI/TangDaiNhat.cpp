#include <iostream>
#include <vector>

using namespace std;

vector<int> result; // lưu trữ dãy con tăng dài nhất
int max_length = 0; // lưu độ dài của dãy con tăng dài nhất

void TangDaiNhat(vector<int>& A, int idx, vector<int>& current) {
    if (idx == A.size()) {
        if (current.size() > max_length) {
            max_length = current.size();
            result = current;
        }
        return;
    }

    // Thử thêm phần tử A[idx] vào dãy con tăng hiện tại
    if (current.empty() || A[idx] >= current.back()) {
        current.push_back(A[idx]);
        TangDaiNhat(A, idx + 1, current);
        current.pop_back();
    }

    // Không thêm phần tử A[idx] vào dãy con tăng hiện tại
    TangDaiNhat(A, idx + 1, current);
}

int main() {
    vector<int> A = {1, 6, 5, 4, 7, 8, 2, 9, 0, 10};
    vector<int> current;
    TangDaiNhat(A, 0, current);

    cout << "Dãy con tăng dài nhất: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Độ dài: " << max_length << endl;

    return 0;
}
