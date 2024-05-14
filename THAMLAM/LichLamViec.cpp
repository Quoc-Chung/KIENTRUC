#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/// Hàm tham lam để tìm lịch làm việc tối ưu và tính tổng số tiền thưởng
int maxProfit(vector<pair<int, pair<int, int>>> &jobs) {
    // Sắp xếp các công việc theo thứ tự giảm dần của phần thưởng
    sort(jobs.begin(), jobs.end(), greater<pair<int, pair<int, int>>>());
    
    // Tạo mảng lưu trữ trạng thái đã sử dụng của mỗi thời điểm
    vector<bool> slot(jobs.size(), false);
    
    // Tạo mảng lưu trữ kết quả
    vector<int> result(jobs.size(), -1);
    
    // Biến để tính tổng số tiền thưởng
    int totalReward = 0;
    
    // Duyệt qua từng công việc
    for (int i = 0; i < jobs.size(); i++) {
        // Tìm một thời điểm trống để thực hiện công việc
        for (int j = min(jobs[i].second.first, (int)jobs.size()) - 1; j >= 0; j--) {
            if (!slot[j]) {
                // Thực hiện công việc tại thời điểm j
                slot[j] = true;
                result[j] = jobs[i].first;
                // Cập nhật tổng số tiền thưởng
                totalReward += jobs[i].second.second;
                break;
            }
        }
    }
    
    // In ra lịch làm việc tối ưu
    cout << "Lịch làm việc tối ưu:" << endl;
    for (int i = 0; i < jobs.size(); i++) {
        if (result[i] != -1) {
            cout << "Công việc " << result[i] << " ";
        }
    }
    cout << endl;
    
    // Trả về tổng số tiền thưởng
    return totalReward;
}

int main() {
    vector<pair<int, pair<int, int>>> jobs = {{1, {4, 20}}, {2, {2, 40}}, {3, {4, 50}}, {4, {6, 40}}, {5, {3, 90}}, {6, {7, 60}}, {7, {9, 10}}, {8, {2, 30}}};
    
    int totalReward = maxProfit(jobs);
    cout << "Tổng số tiền thưởng là: " << totalReward << endl;
    
    return 0;
}
