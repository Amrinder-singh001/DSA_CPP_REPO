#include <iostream>
using namespace std;

int BINARYSEARCH(int *arr, int n, int key){
    int start = 0 , end = n-1;

    while(start <= end){
        int mid =  (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
             start = mid+1;    // 2nd half.
        }else{
             end = mid-1;      // 1st half;
        }
    }
     return -1;
}
int main() {
    
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);

   cout << BINARYSEARCH(arr , n, 2) << endl;

return 0;
}