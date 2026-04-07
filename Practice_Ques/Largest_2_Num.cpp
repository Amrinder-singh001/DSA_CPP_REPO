#include <iostream> 
using namespace std;

int main() {
      int a, b;

      cout << "Enter the first number : ";
      cin >> a;

      cout << "Enter the second number : ";
      cin >> b;

      if(a>=b){      // 12>13
        cout << "Largest : " << a << endl;
      } else{
        cout << "Largest : " << b << endl;
      }

    return 0;
}

