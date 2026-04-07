#include <iostream> 
using namespace std;

int main() {
    int n, i, rem;
    cout << "Enter Number : ";
    cin >> n;
       int sum = 0;
    while(n>0){
           rem = n % 10;  // This give last digit of Any number; 
                          // by get last digit and add the last digit to sum;
           if(rem % 2 != 0){
             sum += rem;
          }
           n = n/10;       // To remove last digit from my number;
             
   }
     cout << "Sum Of Odd Digits : " << sum << endl;
    return 0;
}

