#include<bits/stdc++.h>
using namespace std;

// Định nghĩa một struct để lưu thông tin về công việc
struct CongViec {
    int id;
    int deadline;
    int reward;
};

// So sánh công việc dựa trên phần thưởng giảm dần
bool cmp(const CongViec &a, const CongViec &b) {
    return a.reward > b.reward;
}
// Hàm tham lam để tìm lịch làm việc tối ưu
int maxProfit(vector<CongViec> &jobs) {
    // Sắp xếp các công việc theo thứ tự giảm dần của phần thưởng
    sort(jobs.begin(), jobs.end(), cmp);
    
    // Tạo mảng lưu trữ trạng thái đã sử dụng của mỗi thời điểm
    // Tạo vector có kích thước jobs.size() , ban đầu các phần tử là false 
    vector<bool> slot(jobs.size(), false);
    
    // Tính tổng phần thưởng
    int totalProfit = 0;
    

    // Duyệt qua từng công việc
    for (int i = 0; i < jobs.size(); i++) {
        // Tìm một thời điểm trống để thực hiện công việc
        for (int j = min(jobs[i].deadline, (int)jobs.size()) - 1; j >= 0; j--) {
            if (slot[j]==false) {
                // Thực hiện công việc tại thời điểm j
                slot[j] = true;
                totalProfit += jobs[i].reward;
                break;
            }
        }
    } 

    return totalProfit;
}
int main() {
    vector<CongViec> jobs = {{1, 4, 20}, {2, 2, 40}, {3, 4, 50}, {4, 6, 40}, {5, 3, 90}, {6, 7, 60}, {7, 9, 10}, {8, 2, 30}};
    
    cout << "Tổng số tiền thưởng lớn nhất: " << maxProfit(jobs) << endl;
    
    return 0;
}
