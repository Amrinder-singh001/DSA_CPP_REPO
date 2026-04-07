#include  <iostream>
#include  <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int res = 0;

    for (int num : nums) {
        res ^= num;  // XOR operation
    }

    return res;
}

int main() {
    vector<int> nums = {2, 3, 5, 3, 2};

    cout << singleNumber(nums);
    return 0;
}