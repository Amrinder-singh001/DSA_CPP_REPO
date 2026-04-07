// #include <iostream>
// using namespace std;

// int Fact(int n){
//    int fact = 1;
//    for(int i=1; i<=n; i++){
//        fact = fact*i;
//    }             
//    cout << "Factorial of (" << n << ") = " << fact << endl;
//    return fact;
// }
// int main(){
//      Fact(1);
//      Fact(2);
//      Fact(3);
//      Fact(4);
//      Fact(5);

//     return 0;
// }


#include <iostream>
using namespace std;

int Fact(int n){
   int fact = 1;
   for(int i=1; i<=n; i++){
       fact = fact*i;
   }             
   return fact;
}
int main(){

     int F = Fact(5);
     cout << "Factorail is : " << F  << endl;

    return 0;
}