#include <iostream>
using namespace std;
void Kadanesubarray(int *arr, int n){
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i=0; i<n; i++){
      currsum += arr[i];
      maxsum = max(maxsum , currsum);
      if(currsum < 0){
        currsum = 0;
      }
    }
      cout << "My Maximum sum in sub array's(sum) elemnts = " << maxsum << endl;
}
int main() {
     int arr[] = {1,2,-1};
     int n = 3;

     Kadanesubarray(arr, n);
return 0;
}

// TIME COMPLEXICITY = O(N) :) BEG O OF N;
