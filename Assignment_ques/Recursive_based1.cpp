#include <iostream>
#include <vector>
using namespace std;

int binaryproblem(int arr[], int si, int ei, int key){
   if( si > ei){
    return -1;
   }

   int mid = si + (ei - si) / 2;
   if(arr[mid] == key){
    return mid;
   }
    else if(arr[mid] > key){
      return binaryproblem(arr, si, mid-1, key);   // mid ki value badi ho jaye to ham left side key(element) ko search karenge 
   }  else{
      return binaryproblem(arr, mid+1, ei, key);   // mid ki value chotti ho jaye to ham right side key(element) ko search karenge 
   }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int arr[] = {1,2,3,4,5,6,7};

    cout << binaryproblem(arr, 0, 6, 7) << endl;
    return 0;
}