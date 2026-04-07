#include <iostream>
using namespace std;

int main(){
    int n;   
       cout << "Enter the number : ";
       cin >> n;

       int OrignalNum = n;
       int sum = 0;
       int digit;
       
       while(n>0){
        digit = n % 10;    // This we get the last digit of number using [%] operator.
        sum = sum +(digit * digit * digit); // This we get the cube of digits.
        n = n/10;  // this we get remain small digit.
       }

       if(OrignalNum == sum){
        cout << "This is an Armstrong Number : " << sum << endl; 
       }else{
        cout << "This is not An Armstrong Number : " << sum << endl;
       }

        return 0;
}