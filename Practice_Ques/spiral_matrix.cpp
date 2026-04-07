
// CODE FOR SPIRAL MATRIX
#include <iostream>
using namespace std;

void spiral(int matrix[][4], int n, int m){
     
    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = m-1;
   
    cout << "THIS IS THE SPIRAL MATRIX :)\n";

    while(srow <= erow && scol <= ecol){
    // Top
        for(int j= scol; j<= ecol; j++){
            cout << matrix[srow][j] << " ";
        }
        // cout << endl;

    // Right
        for(int i= srow+1; i<= erow; i++){
            cout << matrix[i][ecol] << " ";
       } 
        // cout << endl;   
    // Bottom
        for(int j= ecol-1; j>= scol; j--){
            if(srow == erow){
                break;
            }
            cout << matrix[erow][j] << " ";
        }
        // cout << endl;
    // Left
        for(int i= erow-1; i>= srow+1; i--){
            if(scol == ecol  ){
                break;
            }
            cout << matrix[i][scol] << " ";
        }
        //  cout << endl;

          srow++; scol++;
          erow--; ecol--;
    }
          cout << endl;
}
int main() {

     int matrix[4][4] = {
          {1,2,3,4},
          {5,6,7,8},
          {9,10,11,12},
          {13,14,15,16},
     };

     int matrix2[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
   };
     int n = 3, m = 4;

     spiral(matrix2, n,m);

return 0;
}