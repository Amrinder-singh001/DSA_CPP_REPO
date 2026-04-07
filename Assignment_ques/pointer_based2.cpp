#include <iostream>
using namespace std;

void multiplyby2(int &a, int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int main() {
     int x=1,y=2, z=3;
     multiplyby2(x,y,z);

     cout << x << " , " << y << " , " << z << endl;   // 2,4,6;

return 0; 
}