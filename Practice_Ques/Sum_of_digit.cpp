#include <iostream>
using namespace std;

int main(){
  int n, i;
    cout << "Enter Number : ";
    cin >> n;
       int sum = 0;
    while(n>0){
        int rem = n % 10;  // This give last digit of Any number; 
           sum += rem;     // by get last digit and add the last digit to sum;
           n = n/10;       // To remove last digit from my number;
           
   }
      cout << "Sum of digit : " << sum << endl;
     return 0;
}