
// First method to solve this question (2 function approach)
// #include <iostream>
// using namespace std;

// int update1(int num, int i){
//     int bitmask = ~(1<<i);
//       return (bitmask & num); 
// }
// int update2(int num, int i){
//     int bitmask = 1<<i;
//       return (bitmask | num); 
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//        cout << update1(7, 2) << "\n";      // 3
//        cout << update2(7, 3) << "\n";      // 15

//     return 0;
// }


// Second method of solve this question (1 function approach)
#include <iostream>
using namespace std;

void updateithbit(int num, int i, int val){
   num = num & ~(1 << i);
   num = num | (val << i);

   cout << num << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

       updateithbit(7, 3, 1);      

    return 0;
}