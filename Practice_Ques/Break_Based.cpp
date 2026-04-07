#include <iostream>
using namespace std;
  int main(){
    int n;
     do{
        cout << "Enter Number : ";
        cin >> n;

         if(n%10 == 0){
            break;
        }else{
            cout << "You Entered : " << n << endl;
        }
     }while(true);
     
      return 0;
  }