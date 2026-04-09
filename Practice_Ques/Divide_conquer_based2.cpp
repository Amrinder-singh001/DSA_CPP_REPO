// QUICK SORT :)
#include <iostream>
using namespace std;


void printarr(int arr[], int n){
   for(int i=0; i<n; i++){
      cout << arr[i] << " ";
   }
    cout << endl;
}

int partition(int arr[], int si, int ei){
   int i = si-1;
   int pivot = arr[ei];  // pivot is pointing to the last element of an array

   for(int j = si; j < ei; j++){
      if(arr[j] <= pivot){
         i++;
         swap(arr[i] , arr[j]);
      }
   }
         i++;
         swap(arr[i] , arr[ei]);

        // Pivotidx = i;
         return i;
}
void quicksort(int arr[], int si, int ei){
   
     if(si >= ei){
      return;
   }

   int pivotidx = partition(arr, si, ei);

    quicksort(arr, si, pivotidx-1);   //Left half
    quicksort(arr, pivotidx+1, ei);   //Right half

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      int arr[] = {6,3,7,5,2,4};
      int n = sizeof(arr)/sizeof(int);

      quicksort(arr, 0, n-1);
      printarr(arr, n);
    return 0;
}