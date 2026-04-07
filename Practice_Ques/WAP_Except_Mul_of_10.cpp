#include <iostream> 
using namespace std;

int main() {
    int i,n;

         do{
          cout << "Enter N : ";
          cin >> n;
            if(n % 10 == 0){
                continue;            // if the user no is multiple of 10 then skip the value;
            }else{
                cout << "You Entered : " << n << endl;     // if the user no is not multiple of 10 then print the statement
            }
            
         }while(true);

    return 0;
}

