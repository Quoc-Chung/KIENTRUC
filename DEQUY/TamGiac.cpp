#include <iostream>
using namespace std;

void drawTriangle(int height) {
    if (height <= 0) {
        return;
    }

 
    // Gọi đệ quy với chiều cao giảm đi 1
    drawTriangle(height - 1);
       // In dấu '*' cho mỗi hàng
    for (int i = 0; i < height; ++i) {
        cout << "* ";
    }
    cout <<endl;

}

int main() {
    int triangleHeight;
    cout << "Nhap chieu cao tam giac: ";
    cin >> triangleHeight;

    drawTriangle(triangleHeight);

    return 0;
}
