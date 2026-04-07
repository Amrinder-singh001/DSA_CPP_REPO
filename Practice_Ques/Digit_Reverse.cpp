#include <iostream> 
using namespace std;

int main() { 
     int n, result = 0, lastdigit;
       cout << "Enter the number : ";        // 1837
       cin >> n;
       
        // while(n>0){     // 1
        //    int lastdigt = n % 10;  // 1837 % 10;  and get rem = 7 
        //    cout << lastdigt << ""; 
        //     n = n / 10; // remove 7 and continue from rest number like 183
        //                 // print rem ki value  
        // }             // repeat this cycle when the conditon is not wrong

          // cout << endl;

          while(n>0){                                
            lastdigit = n % 10;                 // 1837 % 10;  and get rem = 7 
            result = result * 10 + lastdigit;
            n = n / 10;                            // remove 7 and continue from rest number like 183
                                                    // print rem ki value  
         }        
          cout << "reverse : " << result << endl;
    return 0;
}

