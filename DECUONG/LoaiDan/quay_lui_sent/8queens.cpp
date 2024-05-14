#include<bits/stdc++.h>
using namespace std;

int n, dem = 0;
int x[20];

int Ghinhan() {
   int i;
   dem++; 
   cout<<dem<<". ";
   for (i = 1; i <= n; i++) cout<<"  "<<x[i];
   cout<<endl;
}

int XepHau(int i) {
   int j, k;
   bool legal;
   
   for (j = 1; j <= n; j++) {
      legal = true;
      for (k = 1; k < i; k++)
         if ((j == x[k])||(fabs(j - x[k]) == i - k))
            legal = false; 
      if (legal){
         x[i] = j;
         if (i == n) Ghinhan();
         else XepHau(i+1);
      }
   }
}

int main() {
    cout<<"Input n = ";
	cin>>n;
    cout<<endl<<"==== RESULT ===="<<endl;
    dem = 0;
    for (int i=0;i<=20;i++)
    	x[i] = 0;
	XepHau(1);
    if (dem == 0) cout<<"No solution!"<<endl;
	
	return 0;
}
