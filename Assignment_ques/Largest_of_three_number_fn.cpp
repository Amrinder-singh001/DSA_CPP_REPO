#include <iostream>
using namespace std;

int a, b, c;

int Largestof3(int a, int b, int c){

      if(a>=b && a>=c){
        // cout << "Larger is : " << a << endl;
        return a;
      }else if(b>=c && b>=a){
        // cout << "Larger is : " << b << endl;
        return b;
      }else{
        // cout << "Larger is : " << c << endl;
        return c;
      }
}
int main(){
    cout << Largestof3(3, 2, 1) << endl;
    return 0;
}