
// 4 code of (backtracking).
// Backtracking On N Queens with NxN chessboard
#include <iostream>
#include <vector>
using namespace std;

void printboard(vector<vector<char> > board){     
  int n = board.size();

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
       cout << board[i][j] << " ";
    }
    cout << endl;
  }
    cout << "--------------\n";
}
bool issafe(vector<vector<char> > board, int rows, int cols){
   int n = board.size();
    // Horizontally
    for(int j=0; j<n; j++){
       if(board[rows][j] == 'Q'){
          return false;
       }
    }

    // verticaly
    for(int i=0; i<rows ;i++){
       if(board[i][cols] == 'Q'){
          return false;
       }
    }


     // Left digonal
    for(int i=rows, j=cols; i>=0 && j>=0; i--, j--){
       if(board[i][j] == 'Q'){
          return false;
       }
    }

    // right digonal
    for(int i=rows, j=cols; i>=0 && j<n; i--, j++){
       if(board[i][j] == 'Q'){
          return false;
       }
    }
       return true;       
}
void NQueens(vector<vector<char> > board, int rows) {
   int n = board.size();
   if(rows == n) {
     printboard(board);
     return;
   }
   for(int j=0; j<n; j++){
     if(issafe(board, rows, j)){
        board[rows][j] = 'Q';
        NQueens(board, rows+1);
        board[rows][j] = '.';
     }
   }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     vector <vector<char>> board;  
     /*
     Ye 2D dynamic array banayi gayi hai C++ me, jisme characters store honge.
     Outer vector = rows
     Inner vector<char> = columns
     */
      int n = 4;
      for(int i=0; i<n; i++){
        vector<char> newrow;
          for(int j=0; j<n; j++){     
            newrow.push_back('.');
          }
            board.push_back(newrow);
      }
      NQueens(board, 0);
    return 0;
}