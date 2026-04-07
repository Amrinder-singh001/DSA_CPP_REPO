#include <iostream> 
using namespace std;

int main() {
        int income;
        float tax;
           cout << "Enter your Annual income(In Lacks : ";
           cin >> income;

        //  if(income < 400000){
        //     tax = 0/100 * income;
        //    }else if(income >= 400000 && income <= 800000){       // 500000
        //      tax = 5/100 * income;  // 25000
        //    }else if(income >= 800000 && income <= 1200000){
        //     tax = 10/100 * income;
        //    }else if(income >= 1200000 && income <= 1600000){
        //     tax = 15/100 * income;
        //    }else if(income >= 1600000  && income <= 1800000){
        //    tax = 20/100 * income;
        //    }else if(income >= 1800000 && income <= 2000000){
        //     tax = 25/100 * income;
        //    } else {
        //     cout << "No Tax will be Calculated\n";
        //    }
        //      cout << "Your Annual Salary : " << income << endl;
        //      cout << "Tax on annual salary : " << tax << endl;

        if(income < 5){
          tax = 0 * income;    // 0%
        }else if(income <= 10){
          tax = 0.1 * income;  // 10% 
        }else if(income <= 20){
          tax = 0.2 * income;  // 20%
        }else {
          tax = 0.3 * income;  // 30%
        }

        cout << "Your Annual Salary(in Lacks) : " << income << endl;
        cout << "Tax per Annual Salary Is : " << (tax * 100000) << endl;

    return 0;
}

