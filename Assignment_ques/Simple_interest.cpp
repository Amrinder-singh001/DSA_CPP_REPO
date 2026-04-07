#include <iostream> 
using namespace std;
int main() {
     int principal, rate , time;
       cout << "Enter principal amount : ";
       cin >> principal;

       cout << "Enter Rate amount : ";
       cin >> rate ;

       cout << "Enter time amount : ";
       cin >> time ;

       int SimpleInterst = (principal*rate*time)/100;
          cout << "SI = " << SimpleInterst << endl; 

    return 0;
}

