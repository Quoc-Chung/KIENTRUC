#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Định nghĩa một struct để lưu thông tin của mỗi yêu cầu thuê máy
struct RentalRequest {
    int start_time;
    int end_time;
    int rent_fee;
};

// Hàm so sánh để sắp xếp các yêu cầu theo thời gian kết thúc tăng dần
bool compareEndTime(const RentalRequest &a, const RentalRequest &b) {
    return a.end_time < b.end_time;
}

// Hàm tham lam để tìm tổng số tiền thu được lớn nhất
int maxProfit(vector<RentalRequest> &requests) {
    // Sắp xếp các yêu cầu theo thời gian kết thúc tăng dần
    sort(requests.begin(), requests.end(), compareEndTime);
    
    int total_profit = 0;
    int end_time = 0; // Thời gian kết thúc của yêu cầu thuê máy trước đó
    
    // Duyệt qua từng yêu cầu thuê máy
    for (int i = 0; i < requests.size(); ++i) {
        // Nếu thời gian bắt đầu của yêu cầu hiện tại sau thời gian kết thúc của yêu cầu trước đó,
        // chấp nhận yêu cầu này và cập nhật thời gian kết thúc và tổng số tiền thu được
        if (requests[i].start_time >= end_time) {
            total_profit += requests[i].rent_fee;
            end_time = requests[i].end_time;
        }
    }
    
    return total_profit;
}

int main() {
    // Khởi tạo danh sách yêu cầu thuê máy
    vector<RentalRequest> requests = {
        {6, 12, 15},
        {8, 10, 27},
        {12, 14, 43},
        {11, 13, 110},
        {15, 21, 90}
    };
    
    // Gọi hàm để tính tổng số tiền thu được lớn nhất
    int max_profit = maxProfit(requests);
    
    // In kết quả
    cout << "Tong so tien thu duoc lon nhat la: " << max_profit << endl;
    
    return 0;
}
