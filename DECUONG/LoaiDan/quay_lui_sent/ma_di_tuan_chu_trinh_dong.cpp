#include<bits/stdc++.h>
#define MAX 8
using namespace std;
 
int A[MAX][MAX] = { 0 };
int X[8] = {-2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = {-1, 1,-2, 2,-2, 2,-1, 1};
int dem = 0;
int n, x_first, y_first;
 
void xuat() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", A[i][j]);
        cout << endl;
    }
    cout << endl;
}
 
void diChuyen(int x, int y) {
    ++dem; //Tang gia tri buoc di
    A[x][y] = dem; //Danh dau da di
    for (int i = 0; i < 8; i++)    {
        //Kiem tra xem ma da di het ban co chua
        if (dem == n * n && x == x_first && y == y_first) {
            cout << "Cac buoc di la: \n";
            xuat();
            exit(0); //ket thuc chuong trinh
        }
        //Neu chua di het ban co thi tao buoc di moi
        int u = x + X[i];//tao mot vi tri x moi
        int v = y + Y[i];//tao mot vi tri y moi
        //Neu hop le thi tien hanh di chuyen
        if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
            diChuyen(u, v);
    }
    //Neu khong tim duoc buoc di thi ta phai tra lai cac gia tri ban dau
    --dem;
    A[x][y] = 0;
}
int main() {
    cout << "Nhap n: ";
    cin >> n;
    int a, b;
    cout << "Nhap vi tri ban dau.\nx: ";
    cin>>a;
    cout << "y: ";
    cin >> b;
    x_first = a; y_first = b;
    diChuyen(a, b);
    //Neu khong tim duoc buoc di thi se thong bao
    cout << "Khong tim thay duong di.";
    
    return 0;
}


