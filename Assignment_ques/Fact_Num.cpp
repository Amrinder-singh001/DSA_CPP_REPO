#include <iostream> 
using namespace std;

int main() {
        int n;
         int Fact = 1;
         cout << "Enter the number : ";
         cin >> n;
           for(int i=1; i<=n; i++){
            Fact *= i;

           }
             cout << "Factorial " << n  << " Is : " << Fact << endl;
             
    return 0;
} 

