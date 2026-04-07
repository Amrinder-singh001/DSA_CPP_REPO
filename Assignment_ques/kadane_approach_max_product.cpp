// THROUGH KADANE'S ALGORITHIM

#include <iostream>
using namespace std;
void Kadanesubarray(int *nums, int n){
    int maxproduct = INT_MIN;
    int currproduct = 1;

    for(int i=0; i<n; i++){
      currproduct *= nums[i];
      maxproduct = max(maxproduct , currproduct);
    }
      cout << "My Maximum product in sub array's(product) elemnts = " << maxproduct<< endl;
}
int main() {
     int nums[] = {-1, -2, -3};
     int n = 3;

     Kadanesubarray(nums, n);
return 0;
}

// TIME COMPLEXICITY = O(N) :) BEG O OF N;
