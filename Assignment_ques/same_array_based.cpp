#include <iostream>
using namespace std;

void samearray(int *arr, int n){
//   bool issame = true;
   for(int i=0; i<n; i++){
    if(arr[i] == arr[i+1]){   
    //    issame = true;
          cout << "True\n";
       } else{
    //    issame = false;
          cout << "False\n";
     }      
  }
}
int main() {
     int arr[] = {1,1,1,1};
     int n = sizeof (arr) /  sizeof (int);
     samearray(arr, n);

return 0;
}