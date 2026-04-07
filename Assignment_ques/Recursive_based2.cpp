#include <iostream>
#include <vector>
using namespace std;

int allocurence( vector <int> vec, int key, int i, int n){
    if(i == n){
        return -1;
    }

    if(vec[i] == key){
        cout << i << " "; 
    }

    return allocurence(vec, key, i+1, n);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> vec = {1,2,3,4,5,6,2,2,3,2,2,2,2,2,2,2};

    allocurence(vec, 2, 0, 16);
    return 0;
}