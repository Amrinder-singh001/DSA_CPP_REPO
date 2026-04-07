#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       vector <int> v;
         for(int i=0; i<5; i++){
            v.push_back(i);
         }  

         cout << "Vector size : " << v.size() << "\n";          //5
         cout << "Vector capacity : " << v.capacity()<< "\n";   //8

    return 0;
}