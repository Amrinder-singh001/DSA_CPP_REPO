#include <iostream>
using namespace std;

int calculation(int a, int b){
  int result;
   result = a*a + b*b + 2 * a * b;    //1, 2 = 1^1 + 2^2 + 2 * 1 * 2;
                                      //        1 + 4 + 4 = 9
   return result;
}
int main(){
    cout << calculation(1, 2) << endl;
    return 0;
}