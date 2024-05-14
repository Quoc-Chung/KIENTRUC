#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

typedef struct { // use struct to keep track of indices
	int id;
	int s;
	int f;
} course;

int compare_finish(const void *a, const void *b){
	course *c_a = (course *)a;
	course *c_b = (course *)b;
	return c_a->f - c_b->f;
}

course A[MAX];
int X[MAX];
int greedy_class_selection(int n){
	qsort(A, n, sizeof(*A), compare_finish); // sort courses by finishing time
	int i = 0;
	int count = 0;
	X[0] = 0;
	for(i = 1; i < n; i++){
		if(A[X[count]].f <= A[i].s){
			count++;
			X[count] = i;
		}
	}
	for(i = 0; i <= count; i++)
		cout<<A[X[i]].id<<" ";
		
	return count + 1;
}
 
int main()
{
	int n = 5;
	A[0].id = 1;
	A[0].s = 6;
	A[0].f = 7;
	A[1].id = 2;
	A[1].s = 7;
	A[1].f = 9;
	A[2].id = 3;
	A[2].s = 8;
	A[2].f = 10;
	A[3].id = 4;
	A[3].s = 10;
	A[3].f = 12;
	A[4].id = 5;
	A[4].s = 9;
	A[4].f = 11;
	greedy_class_selection(n);
	
	return 0;
}

