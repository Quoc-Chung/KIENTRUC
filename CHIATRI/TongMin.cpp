#include <iostream>
#include <algorithm> // for std::max

using namespace std;

// Tìm tổng nhỏ nhất của đoạn con liên tục và in ra đoạn đó
void minSubArraySum(int a[], int n) 
{ 
    int min_so_far = a[0]; 
    int curr_min = a[0];
    int begin = 0, end = 0;
    int temp_begin = 0;

    for (int i = 1; i < n; i++) { 
        if (a[i] < curr_min + a[i]) {
            curr_min = a[i];
            temp_begin = i;
        } else
            curr_min = curr_min + a[i];

        if (min_so_far > curr_min) {
            min_so_far = curr_min;
            begin = temp_begin;
            end = i;
        }
    } 

    cout << "Dãy con có tổng nhỏ nhất: ";
    for (int i = begin; i <= end; i++)
        cout << a[i] << " ";
    cout << endl;
} 

int main() 
{ 
    int n = 8;
    int a[] = {1, 3, -5, 1, -10, 4, -1, 0};
    
    minSubArraySum(a, n);

    return 0; 
}
