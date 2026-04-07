#include <iostream>
using namespace std;

void BintoDec(int binnum){
    int n = binnum;
    int pow = 1;  // 2^1  2^2  2^3 .....
    int decnum = 0;
    
    while(n>0){
        int lastdig = n%10;
        decnum += lastdig*pow;
        pow = pow*2;
        n = n/10;
    }
     cout << "My decimal form is : " << decnum << endl;

}
int main() {
          
     BintoDec(101000);
     BintoDec(111111);
     BintoDec(10110);
     BintoDec(10011);
     BintoDec(110010);
     
return 0;
}