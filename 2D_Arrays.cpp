// TWO DIMENSINOAL ARRAY'S IN C++
//ABOUT ARRAY'S, ROWS AND COLUMNS, ASSESS ARRAY'S NUMBER THROUGH INDEXES.  
// #include <iostream>
// using namespace std;
   
// int main() {
//      int studentdetails[3][3] = { // Three Rows AND Three Columns[vala 2D array's].
//         {1,2,3},     
//         {4,5,6},
//         {7,8,9},           
//      };

//       cout << studentdetails[1][2] << endl;  // 6
// return 0;
// }



 // ACCESS ALL INDICES ELEMENTS THROUGH FOR LOOPS BUT INTIALZE THE 2D ARRAY 
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[3][3] = {
//          {1,2,3},     
//          {4,5,6},
//          {7,8,9},
//      };
//     int r = 3, c = 3;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// return 0;
// }



// ACCESS ALL INDICES ELEMENTS OF ARRAY THROUGH (FOR LOOPS) BUT INTIALZE THE 2D ARRAY'S SIZE BUT INTIALZE THE 2D ARRAY ELEMENTS THROUGH USER;
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[3][3];

//     int r = 3, c = 3;
//     cout << "Enter The Elements Of An Array : ";
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cin >>  arr[i][j];
//         }
//          cout << endl;
//     }
//     cout << "MY 2D ARRAY IS :)\n";
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//            cout <<  arr[i][j] << " ";
//         }
//          cout << endl;
//     }
  
// return 0;
// }




// INPUT AND OUTPUT OF 2D ARRAY'S SIZE AND ELEMENTS THROUGH USER'S.
// #include <iostream>
// using namespace std;

// int main() {
//      int n;
//      cout << "Enter the size of 2D array : ";
//      cin >> n;

//      int arr[n][n];   // no of rows = no of columns
//      cout << "Enter the elements of 2D arrays's : \n";
//      for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cin >> arr[i][j];
//         } 
//          cout << endl;
//      }
       
//      cout << "MY 2D ARRAY IS :)\n";

//      for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//            cout << arr[i][j] << " ";
//         }
//          cout << endl;
//      }
// return 0;
// }




// // CODE FOR SPIRAL MATRIX
// #include <iostream>
// using namespace std;

// void spiral(int matrix[][4], int n, int m){
     
//     int srow = 0;
//     int scol = 0;
//     int erow = n-1;
//     int ecol = m-1;
   
//     cout << "THIS IS THE SPIRAL MATRIX :)\n";

//     while(srow <= erow && scol <= ecol){
//     // Top
//         for(int j= scol; j<= ecol; j++){
//             cout << matrix[srow][j] << " ";
//         }
//         // cout << endl;

//     // Right
//         for(int i= srow+1; i<= erow; i++){
//             cout << matrix[i][ecol] << " ";
//        } 
//         // cout << endl;   
//     // Bottom
//         for(int j= ecol-1; j>= scol; j--){
//             if(srow == erow){
//                 break;
//             }
//             cout << matrix[erow][j] << " ";
//         }
//         // cout << endl;
//     // Left
//         for(int i= erow-1; i>= srow+1; i--){
//             if(scol == ecol  ){
//                 break;
//             }
//             cout << matrix[i][scol] << " ";
//         }
//         //  cout << endl;

//           srow++; scol++;
//           erow--; ecol--;
//     }
//           cout << endl;
// }
// int main() {

//      int matrix[4][4] = {
//           {1,2,3,4},
//           {5,6,7,8},
//           {9,10,11,12},
//           {13,14,15,16},
//      };

//      int matrix2[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//    };
//      int n = 3, m = 4;

//      spiral(matrix2, n,m);

// return 0;
// }


// #include <iostream>
// using namespace std;

// void Diogonalsum(int mat[][3], int n){
//     int sum = 0;

//    //FOR BETTER TC = O(N);
//     for(int i=0; i<n; i++){
//            sum += mat[i][i];
//         if(n != n-i-1){
//            sum += mat[i][n-i-1]; 
//         }
//     }
//     cout << "SUM OF DIAGONAL ELEMENTS OF MATRIX IS :( " << sum << endl;
    
//     // TC = O(N^2)
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<n; j++){
//     //         if(i == j){
//     //             sum += mat[i][j];
//     //         }else if(j == n-i-1){
//     //             sum += mat[i][j];  
//     //         }
//     //     }
//     // }
//         // cout << "SUM OF DIAGONAL ELEMENTS OF MATRIX IS :( " << sum << endl;
// } 
// int main() {
//      int matrix[4][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//      };

//      int matrix2[3][3] = {
//         {1,2,3},
//         {5,6,7},
//         {9,10,11},
       
//      };

//        Diogonalsum(matrix2 , 3);
//     //    int result = matrix[0][0] + matrix[1][1] + matrix[2][2] + matrix[3][3];
//         // cout << result << endl;
// return 0;
// }




// FOR FINDING A KEY IN SORTED MATRIX.
// USE OF STAIRCASE APPROACH :) TRAVERESE IN STAIR FORM.

// #include <iostream>
// using namespace std;

// bool search(int mat[][4], int m, int n, int key){
//    int i=0, j = m-1;
//    //cell = 0,m-1;
//     while(i<n && j >= 0){
//          if(mat[i][j] == key){
//             cout << "Found at cell (" << i << "," << j << ")" << endl;
//             return true;
//          }else if(mat[i][j] > key){
//             // Left
//             j--;
//          }else{
//             // Down
//             i++;
//          }
//     }
//        cout << "Key is not found :(\n";
//        return false;
// }

// int main() {
//      int mat[4][4] = {
//             {10,20,30,40},
//             {15,25,35,45},
//             {27,29,37,48},
//             {32,33,39,50},
//      };
    
//       search(mat, 4 ,4 , 45);   
// return 0;
// }


// MATRIX POINTER :) 2D ARRAY NAME BEHAVES AS A ROW POINTER;
#include <iostream>
using namespace std;

int main() {
   int mat[4][4] = {
      {10,20,30,40},
      {15,25,35,45},
      {27,29,37,48},
      {32,33,39,50},
};
   cout << mat << " = " << &mat[0][0]<< endl;  // THIS GIVES THE ADRESS OF 1ST INDEX OF IST ROW BUT MATRIX[MAT] WILL POINT THE FULL FIRST ROW TIL THE INDEXES OF 1ST ROW OF 2D ARRAY IS NOT FINISH.
   cout << mat << " != " << mat[0][1]<< endl;
   cout << mat << " != " << &mat[0][1]<< endl;
   cout << mat << " != " << &mat[0][2]<< endl;
   cout << mat << " != " << &mat[0][3]<< endl;

   // IF WE DO[MAT+1] THEN IT WILL GIVES THE ADRESS OF 1ST INDEX OF 2nd ROW BUT MATRIX[MAT+1] WILL POINT THE FULL SECOND ROW AND SO ON........, TILL THE MATRIX IS NOT FINISH.

   cout << mat+1 << endl;  // 16bits of SPACE IS USED FROM MY STARTING ADRESS 

  
return 0;
}