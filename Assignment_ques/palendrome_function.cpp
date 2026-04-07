#include <iostream>
using namespace std;

int n,rev = 0;
int orignum = n;

int palendrome(int n){
  int lastdig;

  while(n > 0){
    lastdig = n%10;
    rev = rev*10+lastdig;
    n = n/10;
  }

 if(orignum == rev){
   cout << "This is a Palendrome number : " << rev << endl;
 }else{
    cout << "Not a Palendrome number : " << rev << endl;
 }
   return rev;
}
int main(){
    cout << palendrome(321) << endl;
    return 0;
}