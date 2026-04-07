#include <iostream>
using namespace std;

int Product(int a, int b){
   int Mul = a*b;
   return Mul;
}

int main(){
   int M = Product(2, 4);
   cout << "Product = " << M << endl;
   
   return 0;
}