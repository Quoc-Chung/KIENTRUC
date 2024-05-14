#include<bits/stdc++.h>
using namespace std;
template<class T1>

T1 Timkiemnhiphan(T1 *a,T1 n,T1 search) {
    T1 left = 0;
    T1 right = n - 1;
    while (left <= right) {
        T1 mid = (left + right)/2;
        if (a[mid] == search) {
            return mid;
        } else if (a[mid] < search) {
            left = mid + 1;
        } else if (a[mid] > search) {
            right=mid - 1;
        }
    }
    return -1;
}
int Tim_Kiem_Nhi_Phan(int a[],int target,int left,int right) {
    if (left == right) {
        if (a[left] == target) {
            return left;
        } else {
            return -1; // Khong tim thay
        }
    } else {
        int mid =(left + right)/ 2;
        if (a[mid]==target) {
            return mid;
        } else {
            if (a[mid] < target) {
                return Tim_Kiem_Nhi_Phan(a,target,mid + 1,right);
            } else {
                return Tim_Kiem_Nhi_Phan(a,target,left,mid - 1);
            }
        }
    }
}

int main() {
    int n;
    cout << "\nNhap n :";
    cin >> n;
    int *a = new int[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int search;
    cout<<"\nNhap phan tu can tim kiem: ";
    cin>>search;
    int result1 = Timkiemnhiphan(a,n,search);
    if (result1 != -1) {
        cout<<"Tim thay tai vi tri "<<result1+1<<endl;
    } else {
        cout<<"Khong tim thay!\n";
    }
    cout<<"Su dung de quy:";
    int result2 =Tim_Kiem_Nhi_Phan(a,search,0,n - 1);
    if (result2 != -1) {
        cout<<"Tim thay tai vi tri "<<result2+1<<endl;
    } else {
        cout<<"Khong tim thay!\n";
    }

    delete[] a;
    return 0;
}
