#include <iostream>
using namespace std;
void drawRectangle(int rows, int cols, int currentRow = 1) {
    if (currentRow > rows) {
        return;
    }

    for (int i = 0; i < cols; ++i) {
        cout << "* ";
    }
        cout << endl;

    // Gọi đệ quy với hàng tiếp theo
    drawRectangle(rows, cols, currentRow + 1);
}

int main() {
    int rectangleRows, rectangleCols;
    cout << "Nhap so hang cua hinh chu nhat: ";
    cin >> rectangleRows;

    cout << "Nhap so cot cua hinh chu nhat: ";
    cin >> rectangleCols;

    drawRectangle(rectangleRows, rectangleCols);

    return 0;
}
