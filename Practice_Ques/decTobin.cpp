#include <iostream>
using namespace std;

void dectobin(int decnum){
    int n = decnum;
    int pow = 1;  // 10^1  10^2  10^3 .....
    int binnum = 0;
    
    while(n>0){
        int lastdig = n%2;
        binnum += lastdig*pow;
        n = n/2;
        pow = pow*10;
       
    }
     cout << "My binary form is : " << binnum << endl;

}
int main() {
       dectobin(25);
       dectobin(49);
       dectobin(31);
       dectobin(88);
return 0;
}