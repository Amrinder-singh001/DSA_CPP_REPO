#include <iostream>
using namespace std;

int main() {
   int n;
   
   cout << "Enter the size of number : ";
   cin >> n;

   int Lar[50];
   cout << "Enter the elements of array : \n";
   for(int i=0; i<n; i++){
    cin >> Lar[i];
   }

   int max = Lar[0];
   for(int i=0; i<n; i++){
        if(Lar[i] > max){
            max = Lar[i];
        }
   }
   cout << max << " is Largest in an array\n";

return 0;
}