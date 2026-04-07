
// THROUGH METHOD THREE = INSERTION SORT;
// TIME COMPLEXCITY = O(N^2) OR O(LOGN)
#include <iostream>
using namespace std;

void printarray(char arr[], int n){
     
    cout << "MY SORTED ARRAY\n";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
        cout << endl << endl;
}
void charsort(char *arr, int n){

    for(int i=0; i<n; i++){
        int curr = arr[i];  //4
        int prev = i-1;
         while (prev >=0 && arr[prev] < curr){       // This is In Decending order. for Accending [>]
            swap(arr[prev], arr[prev+1]);
            prev--;
         } 
            arr[prev+1] = curr;
        }
        printarray(arr, n);
     }

 int main() {

    cout << endl;

     char arr[] = {'a','e','t','y','w','v','d','h','k','a','c','p','i'};
     int n = 13;

     charsort(arr, 13);
return 0;
}