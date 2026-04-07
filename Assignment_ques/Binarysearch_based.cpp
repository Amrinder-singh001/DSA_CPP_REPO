// #include <iostream>
// using namespace std;

// int binarySearch(int *nums, int n, int key){
//     int start = 0, end = n-1;

//     while(start <= end){
//         int mid = (start+end)/2;
//         if(nums[mid] == key){
//             return mid;
//         }else if(nums[mid] > key){  // right half   7 > 0
//               end = mid-1;
//         }else{
//               start = mid+1;
//         }
//     }
//        return -1; 
// }
// int main() {
//      int nums[] = {4,5,6,7};
//      int n = 7;

//      cout << binarySearch(nums, n, 6); // index = 4; means 5th position of array start from 1.
//  return 0;
// }


#include <iostream>
using namespace std;

int binarysearch(int *nums, int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid;

        // Left half sorted
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half sorted
        else {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {

    int nums[7] = {4,5,6,7,0,1,2};
    int n = 7;

    cout << "Through Binary search position of index is " << binarysearch(nums, n, 0) << endl;
     
return 0;
}