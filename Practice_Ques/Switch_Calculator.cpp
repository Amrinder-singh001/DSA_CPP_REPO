#include <iostream> 
using namespace std;

int main() {
      int choise;

        cout << "The Choices\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Modulo\n";
        cout << "Enter your choise : ";
        cin >> choise;

        int a, b;
           cout << "Enter Your First Number : ";
           cin >> a;
            
           cout << "Enter Your Second Number : ";
           cin >> b;


        switch(choise){
          case 1 :
            cout << "Addition is : \n" << (a+b);
          break;
          case 2 :
            cout << "Subtraction is : \n" << (a-b);
          break;
          case 3 :
            cout << "Multiplication is : \n" << (a*b);
          break;
          case 4 :
          if(b != 0){
            cout << "Division is : \n" << (a/b);
          }else{
            cout << "Divisor cannot be zero\n";
            break;
          }
          case 5 :
            cout << "Modulo is : \n" << (a%b);
          break;

          default :
          cout << "Invalid choise! Try Again" << endl;
        }

    return 0;
}
 
