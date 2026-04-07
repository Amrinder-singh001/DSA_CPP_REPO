// Chapter = 9 (Patterns)
// Print Square pattern with different Number;

   // 1111
   // 2222
   // 3333
   // 4444

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
    
//     // Outer Loop
//     for(i=1; i<=n; i++){
//          // Inner Loop
//      for(int j=1; j<=n; j++){
//        cout << i;   
//      }
//        cout << endl;
//     }

    
//     return 0;
// }

// Print Pattern.
 // *            // Logic = * is equal to my i values
//  **
//  ***
//  ****

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
    
//     // Outer Loop
//     for(i=1; i<=n; i++){
//          // Inner Loop
//      for(int j=1; j<=i; j++){
//        cout << " * ";   
//      }
//        cout << endl;
//     }

    
//     return 0;
// }

//Inverted Triangle Pattern
 // ****
//  ***
//  **
//  *

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
    
//     // Outer Loop
//     for(i=1; i<=n; i++){
//          // Inner Loop
//      for(int j=1; j<=n-i+1; j++){
//        cout << "* ";   
//      }
//        cout << endl;
//     }

    
//     return 0;
// }

// HALF PYRAMYD PATTERN
// LIKE 
// N = 4;
// 1     
// 12
// 123
// 1234

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
    
//     // Outer Loop
//     for(i=1; i<=n; i++){
//          // Inner Loop
//      for(int j=1; j<=i; j++){
//        cout << j;   
//      }
//        cout << endl;
//     }

    
//     return 0;
// }


// CHARACTER PRAYAMYD PATTERN
// LIKE 
// A
// BC
// DEF
// GHIJ


// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
    
//     char ch = 'A';

//     // Outer Loop
//     for(i=1; i<=n; i++){
//          // Inner Loop
//      for(int j=1; j<=i; j++){
//        cout << ch;
//         ch++;   
//      }
//        cout << endl;
//     }

    
//     return 0;
// }

// HOLLOW RECTANGLE PATTERN
// LIKE 
// ********
// *      *
// *      *
// ********

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 

//     // Outer Loop
//     for(i=1; i<=n; i++){
//        cout << "* ";
//          // Inner Loop
//      for(int j=1; j<=n-1; j++){
//           if(i == 1 || i == n){
//             cout << " * ";
//           }else{
//             cout << "   ";
//           }
//      }   
//        cout << " * " << endl;
//     }
//     return 0;
// }


// INVERTED AND ROTATED HALF PYRAMID PATTERN 
// LIKE 
//    *
//   **
//  ***
// ****


// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 

//     // Outer Loop
//     for(i=1; i<=n; i++){
      
//          // Inner Loop
//      for(int j=1; j<=n-i; j++){
//          cout << " ";
//      }

//      for(int k=1; k<=i; k++){
//       cout << "*";
//    }

//        cout << endl;
//     }
//     return 0;
// }

// RHOMBUS PATTERN

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 

//     // Outer Loop
//     for(i=1; i<=n; i++){
      
//          // Inner Loop
//      for(int j=1; j<=n-i; j++){
//          cout << " ";
//      }

//      for(int k=1; k<=n; k++){
//       cout << "*";
//    }

//      for(int l=1; l<=i; l++){
//       cout << " ";
//   }
 
//        cout << endl;
//     }
//     return 0;
// }


// FLYOD'S TRIANGLE PATTERN 
// LIKE THIS: 

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n; 
     
//     int num = 1;

//     // Outer Loop
//     for(i=1; i<=n; i++){
    
//          // Inner Loop
//      for(int j=1; j<=i; j++){
//          cout << num << " ";
//          num++;
//      }  
 
//        cout << endl;
//     }
//     return 0;
// }


// DIOMOND PATTERN
// 


// #include <iostream> 
// using namespace std;

// int main() {
//     int i,n;
//     cout << "Enter N : ";
//     cin >> n;

//     // Outer Loop
//     for(i=1; i<=n; i++){
    
//         // Inner Loop 1
//      for(int j=1; j<=n-i; j++){
//          cout << " ";
        
//      } 
//         // Inner Loop 2
//      for(int j=1; j<=2*i-1; j++){
//         cout << "*";
       
//     }
//       cout << endl;

// }
//       for(int i=n; i>=1; i--){
//         // Inner Loop 3
//        for(int j=1; j<=n-i; j++){
//            cout << " ";     
//        } 
//         // Inner Loop 4
//        for(int j=1; j<=2*i-1; j++){
//                cout << "*";   
//            }
//               cout << endl;

//         }
//     return 0;
// }


// BUTTERFLY PATTERN
// LIKE THIS 



#include <iostream> 
using namespace std;

int main() {
    int i,n;
    cout << "Enter N : ";
    cin >> n;

    // Outer Loop
    for(i=1; i<=n; i++){
    
        // Inner Loop 1
     for(int j=1; j<=i; j++){          // print stars for pattern 
         cout << "*";
        
     } 
        // Inner Loop 2
     for(int j=1; j<=2*(n-i); j++){   // print spaces for pattern 
        cout << " ";
       
    }
        // Inner Loop 3
      for(int j=1; j<=i; j++){        // print again stars for pattern 
        cout << "*";
      }

      cout << endl;

}

    // Outer Loop
    for(i=n; i>=1; i--){
    
        // Inner Loop 1
     for(int j=1; j<=i; j++){          // print stars for pattern 
         cout << "*";
        
     } 
        // Inner Loop 2
     for(int j=1; j<=2*(n-i); j++){   // print spaces for pattern 
        cout << " ";
       
    }
       // Inner Loop 3
      for(int j=1; j<=i; j++){        // print again stars for pattern 
        cout << "*";
      }

      cout << endl;

}
    return 0;
}