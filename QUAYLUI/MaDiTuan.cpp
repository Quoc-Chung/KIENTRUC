#include<bits/stdc++.h>

#define MAX 8
using namespace std; 

int a[MAX][MAX] = {0};
int X[8] = {-2,-2,-1,-1,1,1,2,2};
int Y[8] = {-1,1,-2,2,-2,2,-1,1};
int n;

int dem = 0;
void Xuat(){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }
}
void Move(int x, int y) {
    dem++;
    a[x][y] = dem;

    for (int i = 0; i < 8; i++) {
        int u = x + X[i];
        int v = y + Y[i];
        
        // Nó không vượt quá cái bàn cờ với lại nó là cái vị trí chuea được đi qua 
        // thì mình sẽ gọi hàm đệ quy di chuyển đến cái vị trí đó  
        if (u >= 0 && u < n && v >= 0 && v < n && a[u][v] == 0) {
            Move(u, v);
        }
    }
    if (dem == n * n) {
        cout << "Cac buoc da di : "<<endl;
        Xuat();
        exit(0);
    }
    // Đây chính là phần quay lui của bài toán tức nào nếu nó 
    // Giảm cái đếm này nếu như mình không tìm được bước đi phải trả về giá trị ban 
    // đầu cho nó  không thì nó sẽ không thể quay lui lại cho đến khi tìm được đường đi mới thỏa mãn 
    dem--;
    a[x][y] = 0;
}
int main() {
    cout << "Nhap kich thuoc n: ";
    cin >> n;

    int a, b;
    cout << "Nhap vi tri ban dau: ";
    cin >> a >> b;

    cout << "(" << a << " , " << b << ")"<<endl;
    Move(a, b);
    cout << "Khong tim duoc duong di.";
    return 0;
}