#include<bits/stdc++.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
#define max(x, y) (((x) < (y)) ? (y) : (x))
#define is_equal(x,y) (((x) - (y) == 0) ? 1 : 0)
#define MAX 5000
#define INFTY 100000000
using namespace std;

typedef struct {
	int id;
	int d;
	int p;
} job;

job A[MAX];
int X[MAX];

int compare_profit(const void *a, const void *b){
	job *c_a = (job *)a;
	job *c_b = (job *)b;
	return c_b->p - c_a->p;
}

void greedy_scheduling(int n){
	qsort(A, n, sizeof(*A), compare_profit);
	memset(X, -1, sizeof(X));
	int i = 0, j = 0;
	for(i = 0; i < n; i++){
		j = A[i].d;
		while((X[j]!= -1) && (j > 0)){
			j--;
		}
		if(j > 0) X[j] = i;
	}
}

void printJobArr(job A[], int n){
	int i = 0;
	for(i = 0; i < n; i++){
		cout<<"("<<A[i].id<<","<<A[i].d<<","<<A[i].p<<")  ";
	}
	cout<<endl;
}

int main (){
	int n = 5;
	A[0].id = 1; A[0].d = 2; A[0].p = 100;
	A[1].id = 2; A[1].d = 1; A[1].p = 19;
	A[2].id = 3; A[2].d = 2; A[2].p = 27;
	A[3].id = 4; A[3].d = 1; A[3].p = 25;
	A[4].id = 5; A[4].d = 3; A[4].p = 15;

	greedy_scheduling(n);
	cout<<"The optimal schedule: "<<endl;
	int i = 0;
	for(i = 1; i <= n; i++){
			if(X[i] != - 1){
				cout<<"("<<A[X[i]].id<<","<<A[X[i]].d<<","<<A[X[i]].p<<") ";
			}
		}
	cout<<endl;
	
	return 0;
}


