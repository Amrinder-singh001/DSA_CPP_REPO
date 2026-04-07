#include <iostream>
using namespace std; 

bool IsPrime(int n){
    if(n == 1){
        return false;
    }
    
     
    for(int i=2; i<=n-1; i++){
       if(n % i == 0){  // non-prime
         return false;
       }else{
       }
    }
    return true;  


     
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){  // non-prime
          return false;
        }else{
        }
     }
     return true;  

}
 

int main(){

        //  cout << "My Number is : " << IsPrime(1) << endl; 
         cout << "My Number is : " << IsPrime(13) << endl;               
        
    return 0;
}
