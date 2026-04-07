#include <iostream>
using namespace std;

void Reversearr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
     cout << endl;
}
int main() {
     int arr[] = {5, 4, 3, 9, 2};
     int n = sizeof(arr) / sizeof(int);

    //  int copyarr[n];
    //  for(int i=0; i<n; i++){
    //      int j = n-i-1;
    //      copyarr[i] = arr[j];
    //  }

    //  for(int i=0; i<n; i++){
       
    //    arr[i] = copyarr[i];
    // }
 
    // Using Swappimg Method;
      int start = 0, end = n-1;
     
       while(start < end){
        swap(arr[start], arr[end]);   // using swap in built function.
        start++;
        end--;
       }
      Reversearr(arr, n);

return 0;
}