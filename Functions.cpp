// Function 
// Function is c++ is defined as the piece of code under the block of code that perform specific task
// A Function can call to another function.
// Not just like only main function can call to another functions.  
// Function Syntax
// returntype Fname(){

// do some work 
// return function value

// }

// First function;

// #include <iostream>
// using namespace std;

// void HelloWorld() {
//      cout << "Hello World :) \n";
// }
// void Assistent(){
//      HelloWorld();
//      cout << "Work Is Done\n";
// }
// int main(){
//      Assistent();     // To use functions we can to call it.
//      return 0;
// }

//1. Forward Declaration.
//   Phele function declare karo 'n baad mei function ko intialize karke use karo.

// #include <iostream>
// using namespace std;

// void HelloWorld();

// int main(){
//       HelloWorld();     // To use functions we can to call it.
//      return 0;
// }

// void HelloWorld() {
//     cout << "Hello World :) \n";
// }

//2. Syntax with parameters
//   Function of sum and difference;

//  #include <iostream>
//  using namespace std;

//  int sum(int a, int b){        // these a and b are Known as parameters
//    int sum = a+b;
//    return sum;
// }


// int diff(int a, int b){        // these a and b are Known as parameters
//     int diff = a-b;
//     return diff;
//  }
 
// int main(){

//      int s = sum(2,4);     // To use functions we can to call it. These a and b are Known as arguments 
//      cout << "Sum = " << s << endl;


//      int d = diff(2,4);     // To use functions we can to call it. These a and b are Known as arguments 
//      cout << "diff = " << d << endl;

//      return 0;
// }


// LOCAL VS GLOBAL VARAIALBLE 
// LOCAL :) Used within block of code not can be used or accessed outside the block of code.
// GLOBAL :) It can be defined top of the code both main and any other function we can use it. So we can access this variable can be anyware and wherever int whole code.

// Example :) Local Variable
// #include <iostream>
// using namespace std; 

// int sum(int a, int b){        // these a and b are Known as parameters
//   int sum = a+b;
//   return sum;
// }

// int main(){

//      sum(2,4);         // To use functions we can to call it. These a and b are Known as arguments 
//     cout << "Sum = " << s << endl;  // variable (s) is undefined because (s) is defined in sum function Not in the main function.

//     return 0;
// }

// Example :) Global Variable
// #include <iostream>
// using namespace std; 

//   int s, total;   // This is a Global variable.

// int sum(int a, int b){        // these a and b are Known as parameters
//     total = a+b;
//     return total;
// }

// int main(){

//     s = sum(2,4);         // To use functions we can to call it. These a and b are Known as arguments 
//     cout << "Sum = " << s << endl;  // variable (s) is undefined because (s) is defined in sum function Not in the main function.

//     return 0;
// }


// FUNCTION OVERLOADING :) Many function with same name but different parameters.
// In sab me ho rhi hai function ki overloading.
#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}


double sum(double a, double b){     // we can see difference through different data types 
    return a+b;
}


int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout << sum(2,5) << endl;                  // 7
    cout << sum(2.2, 4.5) << endl;             // 6.7
    cout << sum(123, 456, 789) << endl;        // 1368
    
    return 0;
}