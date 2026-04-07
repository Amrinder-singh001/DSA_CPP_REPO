#include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int>& nums) {
    int i;
    int ans=0;
      for(i=0; i<nums.size(); i++){
         ans ^= nums[i];
      }

    return ans;
}

int main() {
    vector<int> nums = {1, 4, 3};

    cout << xorBeauty(nums);
    return 0;
}