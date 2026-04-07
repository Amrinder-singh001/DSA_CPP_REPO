#include <iostream>
using namespace std;

int clearBitsInRange(int num, int i, int j) {
    // Left mask (1s before j)
    int left = (~0) << (j + 1);

    // Right mask (1s after i)
    int right = (1 << i) - 1;

    // Combine both masks
    int mask = left | right;

    // Clear bits using AND
    return num & mask;
}

int main() {
    int num = 15;
    int i = 1, j = 3;

    cout << clearBitsInRange(num, i, j);
    return 0;
}