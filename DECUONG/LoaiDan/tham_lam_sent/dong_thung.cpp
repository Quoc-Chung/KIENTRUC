#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x < *y)
		return 1;
	else if (*x > *y)
		return -1;

	return 0;
}

typedef struct
{
	int ktcl; //Kich thuoc con lai
	int dsdv[20];
	int sodv;
} bin_struct;

int main(){
    int B = 6; //Kich thuoc thung
    int A[] = {3, 2, 5, 1, 4, 3}; //Kich thuoc cac do vat
    int sodv = sizeof(A)/sizeof(A[0]); //So do vat
    bin_struct binList[100];	
	int thung = 0;
	binList[thung].ktcl = B;
	binList[thung].sodv = 0;
	qsort(A, sodv, sizeof(A[0]),compare);
	for (int i=0; i<sodv; i++) {
		if(i==0) {
			cout<<A[i];
		} else {
			cout<<","<<A[i];
		}
	}
    for (int i=0; i<sodv; i++) {
    	bool isAdded = false;
		if (A[i]<=binList[thung].ktcl) {
			binList[thung].dsdv[binList[thung].sodv] = A[i];
			binList[thung].sodv++;
			binList[thung].ktcl -= A[i];
			isAdded = true;
		} else {
			for (int j=0; j<thung; j++) {
				if (A[i] <= binList[j].ktcl) {
					binList[j].dsdv[binList[j].sodv] = A[i];
					binList[j].sodv++;
					binList[j].ktcl -= A[i];
					isAdded = true;
					break;	
				} 
			}
		}
		if(!isAdded) {
			thung++;
			binList[thung].sodv = 0;
			binList[thung].ktcl = B;
			binList[thung].dsdv[binList[thung].sodv] = A[i];
			binList[thung].ktcl -= A[i];
			binList[thung].sodv++;
		}
	}
    
    for (int i=0; i<=thung; i++) {
    	cout<<endl<<"Thung thu "<<i+1<<": ";
    	for (int j=0; j<binList[i].sodv; j++) {
    		cout<<binList[i].dsdv[j]<<" ";
		}
	}
    
	cout<<endl<<"Tong so thung duoc su dung la: "<<thung+1<<endl;
    system("pause");

    return 0;
}
