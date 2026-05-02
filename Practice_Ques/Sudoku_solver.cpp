
// Backtracking On sudoko solver with 9x9 board

#include <iostream>
using namespace std;
 void printsudoku(int sudoku[][9]) {

    cout << "-------------------------" << endl;

    for(int i = 0; i < 9; i++){

        cout << "| ";   // left boundary

        for(int j = 0; j < 9; j++){
            cout << sudoku[i][j] << " ";

            // vertical divider after every 3 cols
            if((j+1) % 3 == 0){
                cout << "| ";
            }
        }

        cout << endl;

        // horizontal divider after every 3 rows
        if((i+1) % 3 == 0){
            cout << "-------------------------" << endl;
        }
    }
}

 bool issafe(int sudoku[9][9], int row, int col, int dig){
     // FOR VERTICALLY 
      for(int i=0; i<9; i++){
        if(sudoku[i][col] == dig){   // i = row number, i=0, i=1, i=2.... , col = remain same 
           return false;
        }
      }

      // FOR HORIZONTALLY 
      for(int j=0; j<9; j++){
        if(sudoku[row][j] == dig){   // row = remain same, j = col number , j=0, j=1, j=2.... ;
           return false;
        }
      }

      // FOR 3x3 GRID IN 9x9 SUDOKU 2D MATRIX
      int startrow = (row/3)*3;
      int startcol = (col/3)*3;

      for(int i=startrow; i<=startrow+2; i++){
        for(int j=startcol; j<=startcol+2; j++){
          if(sudoku[i][j] == dig){
            return false;
          }
        }
      }

      return true;
}
 bool sudokusolver(int sudoku[9][9], int row, int col){
     if(row == 9){
       printsudoku(sudoku);
       return true;
     }

  int nextrow = row;         
  int nextcol = col+1;       

    if(col+1 == 9){
       nextrow = row+1;
       nextcol = 0;
    }
      if(sudoku[row][col] != 0){           
       return sudokusolver(sudoku, nextrow, nextcol);  
     }

      for(int dig = 0; dig <= 9; dig++){
       if(issafe(sudoku, row, col, dig)){        
          sudoku[row][col] = dig;            
           if(sudokusolver(sudoku, nextrow, nextcol)){    
            return true;
           } 
           sudoku[row][col] = 0;   
      }
     }
     
     return false;   
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      int sudoku[9][9] = {{0,1,8,0,0,0,0,0,0},
                          {4,9,0,1,5,7,0,0,2},
                          {0,0,3,0,0,4,1,9,0},
                          {1,8,5,0,6,0,0,2,0},
                          {0,0,0,0,2,0,0,6,0},
                          {9,6,0,4,0,5,3,0,0},
                          {0,3,0,0,7,2,0,0,4},
                          {0,4,9,0,3,0,0,5,7},
                         {8,2,7,0,0,9,0,1,3}};
         
          sudokusolver(sudoku, 0, 0);                
   
    return 0;
}