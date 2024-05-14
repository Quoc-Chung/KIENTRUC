#include <bits/stdc++.h>
using namespace std;
const int N = 9;
// hàm in ra bình thường 
void print(int a[N][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
 
bool check(int board[N][N], int row, int col, int x){
	// Check xem trong hang hien tai da ton tai so x chua, neu ton tai se tra ve false
	for(int j = 0; j < N; j++){
		if(board[row][j] == x){
			return false;
		}
	}
	// Check xem trong cot hien tai da ton tai so x chua, neu ton tai se tra ve false
	for(int i = 0; i < N; i++){
		if(board[i][col] == x){
			return false;
		}
	} 
    // chỉ số hàng và chỉ số cột của ô gốc tọa độ của ô đơn vị  
    // Chỉ số hàng của ô ở gốc tọa độ của 1 ô đơn vị = j -j %3 


	int startRow =row -  row % 3;
	int startCol =col- col % 3;

	// Check xem trong vung don vi hien tai da ton tai so x chua, neu ton tai thi tra ve false
	for(int i = startRow; i < 3+ startRow; i++){
		for(int j = startCol; j <3+ startCol; j++){
			if(board[i][j] == x){
				return false;
			}
		}
	}
	return true;
}
 
bool backTrack(int board[N][N], int row, int col){
    // Check xem nó đi quá cái ô cuối cùng của bàn cờ chưa 
	if(row == N - 1 && col == N){
		return true;
	}
	if(col == N){
		row++;
		col = 0;
	}
	if(board[row][col] > 0){
		return backTrack(board, row, col + 1);
	}
	for(int j = 1; j <= N; j++){
		if(check(board, row, col, j)){
			board[row][col] = j;
			if(backTrack(board, row, col + 1)){
				return true;
			}
		}
		board[row][col] = 0;
	}
	return false;
}
int main(){	
	int board[N][N] = { 
						{ 3, 0, 6, 5, 0, 8, 4, 0, 0 },
						{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
						{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
						{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
						{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
						{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
						{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } 
						};
	if(backTrack(board, 0, 0)){
		print(board);
	}
	else{
		cout << "Khong co cau tra loi " << endl;
	}
	return 0;
}