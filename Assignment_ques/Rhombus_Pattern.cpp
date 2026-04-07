
// RHOMBUS PATTERN


#include <iostream> 
using namespace std;

int main() {
    int i,n;
    cout << "Enter N : ";
    cin >> n; 

    // Outer Loop
    for(i=1; i<=n; i++){
      
         // Inner Loop
     for(int j=1; j<=n-i; j++){
         cout << " ";
     }

     for(int k=1; k<=n; k++){
      cout << "*";
   }

//      for(int l=1; l<=i; l++){
//       cout << " ";
//   }
 
       cout << endl;
    }
    return 0;
}

