// USING BRUTE FROCE APPROACH :) THE TIME COMPLEXCITY(o(n^3)). pronunciation is : Beg of n cube.
#include <iostream>
using namespace std;

void MaxSubarray1(int *arr, int n){

    int maxsum = INT_MIN;   // Minimum mei sabse chotti value(-infinity)

    for(int start=0; start<n; start++){
        for(int end = start; end<n; end++){
            int currsum = 0;
          for(int i=start; i<=end; i++){
             currsum += arr[i];
             maxsum = max(maxsum, currsum);
          }
             cout << currsum << "," << " ";      // This gives the sum of all subarray elements.
        }
        cout << endl;
    }
      cout << "My Maximum sum in sub array's(sum) elemnts = " << maxsum << endl;
}



// USING BRUTE FROCE APPROACH (IN OPTIMIZED WAY) :) FOR BETTER TIME COMPLEXCITY(o(n^2)). pronunciation is : Beg of n square.
void MaxSubarray2(int *arr, int n){

    int maxsum = INT_MIN;   // Minimum mei sabse chotti value(-infinity)

    for(int start=0; start<n; start++){  // start = 2
        int currsum = 0;
        for(int end = start; end<n; end++){  // end = 2, 3, 4, 5
              currsum += arr[end];  
              maxsum = max(maxsum , currsum);     // This gives the sum of all subarray elements.
        }
        cout << endl;
    }
      cout << "My Maximum sum in sub array's(sum) elemnts = " << maxsum << endl;
}

int main() {
  int arr[6] = {2, -3, 6, -5, 4, 2};  
  int n = 6;    
  
  MaxSubarray1(arr, n);

return 0;
}