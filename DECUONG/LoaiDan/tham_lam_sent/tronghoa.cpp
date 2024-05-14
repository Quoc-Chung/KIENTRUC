#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

typedef struct {
	int id;
	string name;
	int time;
} flower;

int compare_time(const void *a, const void *b){
	flower *c_a = (flower *)a;
	flower *c_b = (flower *)b;
	return c_b->time > c_a->time;
}

flower F[MAX];

int AllFlowerinBloom(int n){
	qsort(F, n, sizeof(*F), compare_time);
	int maxT = F[0].time + 1, i;
	cout<<"Thoi gian trong "<<F[0].name<<" la ngay thu 1"<<endl;
	for (i = 1; i < n; i++){
		cout<<"Thoi gian trong "<<F[i].name<<" la ngay thu "<<(maxT - F[i].time)<<endl;
	}
	return maxT + 1;
}

int main()
{
	int n = 4;
	F[0].id = 1;
	F[0].name = "Hong";
	F[0].time = 3;
	F[1].id = 2;
	F[1].name = "Lan";
	F[1].time = 4;
	F[2].id = 3;
	F[2].name = "Cuc";
	F[2].time = 2;
	F[3].id = 4;
	F[3].name = "Muoi gio";
	F[3].time = 1;
	int m = AllFlowerinBloom(4);
	cout<<"Ngay cac loai hoa deu no la ngay thu "<<m;
	
	return 0;
}


