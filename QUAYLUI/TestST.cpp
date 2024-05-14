#include<bits/stdc++.h>
using namespace std;
// Khai báo hàng chứa kích thước của bàn cờ STDOCU 
const int N =9;

// Hàm in ma trận kết quả sau khi hoàn thiện bảng số STDOCU
void print(int a[N][N]){
    for (int i = 0; i< N;i++){
        for (int j=0;j<N;j++){
            cout << a[i][j] << "  "; 
        }
        cout <<endl;
    }
}
// Xây dựng hàm check 
 
// Nhận vào dòng đang xét và nhận vào cột đang xét 
// x là giá trị mà chúng ta điền vào 


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


   // Số điền vào không đươc điền vào các số có trong ô đơn vị là 
   // 3 nhân 3 
   // Công thức tìm ra địa chỉ hàng và côt của ô này 
	int startRow = row - row % 3;
	int startCol = col - col % 3;
    

	// Check xem trong vung don vi hien tai da ton tai so x chua, neu ton tai thi tra ve false
	for(int i = startRow; i < 3; i++){
		for(int j = startCol; j < 3; j++){
			if(board[i][j] == x){
				return false;
			}
		}
	}
	return true;
}






// Hàm quan trọng nhất là xây dựng hàm quay lui trả về số  
// Chỉ cần điền một phương án thì 

// Truyền vào bảng ban đầu và chỉ số hàng và cột mà chúng ta 
// đang xét  
bool backTrack(int board[N][N] , int row, int col ){
    // NẾu dòng mà chúng ta xét đến dòng cuối cùng  và 
    // cột đã xét đến cột cuối cùng  

    if(row == N -1 && col == N  ){
        // Đã hoàn thành cái bảng 
        return true;
    }
    // cột đã đến cuối thì chúng ta phải nhảy sang dòng mới và gán 
    // lại địa chỉ cột bằng 0  
    if(col == N){
      row ++ ;
      col = 0;
    }

    // Trong trường hợp mà một giá trị , gặp 1 cái ô có giá trị , tức là 
// những ô rỗng  = 0 , giá trị giống khác 0 
   if( board[row][col] > 0){
    // Gọi back track đến ô tiếp theo trong dòng đó 
    backTrack(board, row, col +1);
   }
   
   // Gặp những trường hợp không rỗng vào thì nó sẽ dùng một vòng for  
   for (int j = 1; j<= N ; j++){
      // Không được gán bừa  mà phải dùng hàm check 
      if(check(board, row,col , j) == true){
         board[row][col] = j; 
         // NẾu di chuyển đến cái ô tiếp theo thì sẽ trả về true. 
         if(backTrack(board,row,col+1)){
            return true;
         }      
      }
      // Trả về giá trị rỗng cho cái ô định điền , tức là nó không 
      // thỏa mãn cái số ở bên trên thì mình không gán nó mà chúng ta 
      // trả về giá trị rỗng cho nó 
      board[row][col] = 0; 
   }
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