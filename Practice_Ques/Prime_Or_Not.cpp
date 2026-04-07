// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//      bool isprime = true;
//       cout << "Enter the number : ";
//       cin >> n;

//      for(int i = 2; i <= n-1; i++){
//         if(n % i == 0){
//             isprime = false;
//             break;
//         }
//      }
//       if(isprime == true){
//         cout << n << " is prime\n";
//       }else {
//         cout << n << " is not prime\n";
//       }
//   return 0;
// }

// Diff Method.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
     bool isprime = true;
      cout << "Enter the number : ";
      cin >> n;

     for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
     }
      if(isprime == true){
        cout << n << " is prime\n";
      }else {
        cout << n << " is not prime\n";
      }
  return 0;
}