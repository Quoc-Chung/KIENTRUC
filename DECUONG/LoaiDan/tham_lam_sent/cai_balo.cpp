#include<bits/stdc++.h>
using namespace std;

struct DoVat {
	string Ten;
	float TrongLuong, GiaTri, DonGia;
    int PhuongAn;//so luong do vat chon
};

void TinhDonGia(DoVat sp[], int n)
{
   for(int i = 0; i < n; i++)
      sp[i].DonGia = sp[i].GiaTri / sp[i].TrongLuong;
}

 void SapXep(DoVat sp[], int n)
 {
    for (int i = 0; i < n; i++)
       for (int j = i + 1; j < n; j++)
       		if (sp[i].DonGia < sp[j].DonGia)
       			swap(sp[i], sp[j]);
 	cout<<"Danh sach cac san pham sau khi duoc sap theo don gia:"<<endl;
	for (int i=0;i<n;i++) {
		cout<<"San pham: "<<sp[i].Ten<<", trong luong: "<<sp[i].TrongLuong<<", gia tri: "<<sp[i].GiaTri<<", don gia: "<<sp[i].DonGia<<endl;
	}
	cout<<endl;
 }

void Greedy(DoVat sp[], int n, float W)
 {
 	float w = W;
    for (int i = 0; i < n; i++) {
    	if (w >= sp[i].TrongLuong) {
    		sp[i].PhuongAn = (int)(w / sp[i].TrongLuong);
        	w -= sp[i].PhuongAn * sp[i].TrongLuong;
    	}
    }
 }

int main()
{
	int n = 4, W = 37;
	DoVat sp[n];
	sp[0].Ten = "A"; sp[0].TrongLuong = 15; sp[0].GiaTri = 30; sp[0].PhuongAn = 0;
	sp[1].Ten = "B"; sp[1].TrongLuong = 10; sp[1].GiaTri = 25; sp[1].PhuongAn = 0;
	sp[2].Ten = "C"; sp[2].TrongLuong = 2; 	sp[2].GiaTri = 2;  sp[2].PhuongAn = 0;
	sp[3].Ten = "D"; sp[3].TrongLuong = 4;	sp[3].GiaTri = 6;  sp[3].PhuongAn = 0;
	TinhDonGia(sp, n);
	SapXep(sp, n);
	Greedy(sp, n, W);
	//In cac phuong an
	cout<<"Danh sach cac san pham duoc chon:"<<endl;
	float ttl = 0, tgt = 0;
	for (int i = 0; i < n; i++)
		if(sp[i].PhuongAn > 0) {
			cout<<"San pham: "<<sp[i].Ten<<", so luong: "<<sp[i].PhuongAn<<endl;
			ttl += sp[i].PhuongAn * sp[i].TrongLuong;
			tgt += sp[i].PhuongAn * sp[i].GiaTri;
		}
	cout<<"Tong trong luong: "<<ttl<<endl;
	cout<<"Tong gia tri: "<<tgt<<endl;
	
	return 0;
}


