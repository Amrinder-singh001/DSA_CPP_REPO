#include <iostream> 
using namespace std;

int main() {
       int n, lastdig, sum = 0;
       int OrigNum = n;

          cout << "Enter the number : ";
          cin >> n;
        
          while(n>0){
            lastdig = n % 10;
            sum = sum + (lastdig * lastdig * lastdig);
            n = n/10;
          }

          if(OrigNum == sum){
            cout << "This is an Armstrong Number : " << sum << endl; 
           }else{
            cout << "This is not An Armstrong Number : " << sum << endl;
           }
                 
    return 0;
}

