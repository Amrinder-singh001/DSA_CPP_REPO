#include <iostream>
using namespace std;

int n,sum = 0;

int digitsum(int n){
  int lastdig;

  while(n > 0){
    lastdig = n%10;
    sum += lastdig;
    n = n/10;
  }
   return sum;
}
int main(){
    int n;
    cout << "Sum of Digits is : " << digitsum(6473) << endl;
    return 0;
}