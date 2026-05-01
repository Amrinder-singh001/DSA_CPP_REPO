// Code for GridWays using bactracking
#include <iostream>
using namespace std;

int GridWays(int r, int c, int n, int m, string ans){
  // for base case
  if(r == n-1 && c == m-1) {
    cout << ans << endl;
    return 1;
  }
  if(r >= n || c >= m) {
     return 0;
  }

  // Right moves
  int v1 = GridWays(r, c+1, n, m , ans+"R");

  // Down moves
  int v2 = GridWays(r+1, c, n, m, ans+"D");

   return v1+v2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n = 3;
        int m = 3;
        string ans = "";
         cout << "Total possible grid ways to reach the destination is : " << GridWays(0, 0, m, n, ans) << endl;     
    return 0;
}