
// 7 code of (backtracking).
// Backtracking On sudoko solver with 9x9 board
#include <iostream>
#include <vector>
using namespace std;

int Ratmaze(vector<vector<int>> &arr, int r, int c, int n, string ans, vector<vector<bool>> &visited) {

    // invalid case
    if(r < 0 || c < 0 || r >= n || c >= n || arr[r][c] == 0 || visited[r][c]) {
        return 0;
    }

    // destination
    if(r == n-1 && c == n-1) {
        cout << ans << endl;
        return 1;
    }

    visited[r][c] = true;

    int v1 = Ratmaze(arr, r-1, c, n, ans+"U", visited); // Up Move
    int v2 = Ratmaze(arr, r+1, c, n, ans+"D", visited); // Down Move
    int v3 = Ratmaze(arr, r, c-1, n, ans+"L", visited); // Left Move
    int v4 = Ratmaze(arr, r, c+1, n, ans+"R", visited); // Right Move

    visited[r][c] = false;

    return v1 + v2 + v3 + v4;
}

int main() {

  
    vector<vector<int>> arr = {
        {1,1,1,1},
        {0,1,0,1},
        {1,1,1,1},
        {1,0,1,1}
    };

    int n = arr.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    cout << "All Paths:\n";
    int total = Ratmaze(arr, 0, 0, n, "", visited);

    cout << "Total ways: " << total << endl;

    return 0;
}