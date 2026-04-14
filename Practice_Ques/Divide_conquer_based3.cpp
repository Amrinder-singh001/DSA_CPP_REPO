//SEARCH IN ROTATED SORTED ARRAY.
#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int target){
    if(si > ei){
     return -1;
    }
    
   int mid = si + (ei - si)/2;
    if(arr[mid] == target){
        return mid;
    }

    if(arr[si] <= arr[mid]){
       // Line 1 
        if(arr[si] <= target && target <= arr[mid]){
            // Left me seach karo
             return search(arr, si, mid-1, target);
        }else{
             return search(arr, mid+1, ei, target);
        }

    }else{
        // Line 2
          if(arr[mid] <= target && target <= arr[ei]){
            // right me seach karo
            return search(arr, mid+1, ei, target);
        }else{
            // left me seach karo
            return search(arr, si, mid-1, target);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      int arr[] = {4,5,6,7,0,1,2};
       int n = 7;

      cout << "Element found at " << search(arr , 0, n-1, 4) << " index" << endl;

    
    return 0;
}
