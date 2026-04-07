#include <iostream>
using namespace std;

int Linearsearch(int *arr, int n, int key){   // prefer to use pointer array's because eventually they have to become a pointer array in function 
   for(int i=0; i<n; i++){
    if(arr[i] == key){
        return i;
    }
   }
    return -1;  //if no elements was found in array they return simply -1 value.
}
int main() {
     int arr[] = {2,4,6,8,10,12,14,16};
     int key = 10;
     int n = sizeof(arr) / sizeof(int);  // this gives of array's size.
      
    cout << Linearsearch(arr , n, 10) << endl;
      
return 0;
}