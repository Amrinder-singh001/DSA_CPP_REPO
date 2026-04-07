#include <iostream>
using namespace std;

class BankAccount{
    private:
    int Account_number;
    int Balence;
    
    public:
    void deposit(){
        cout << "you can deposited your money here\n";
    }

    void withral(){
        cout << "you can withral your money here\n";
    }

    void Getbalence(){
        cout << "you can get your balance here\n";      
    }

    //setter for Account number
    int setaccount(int acc_no){
       Account_number = acc_no;
       return  Account_number;
    }

    // getter for Account number
    int getaccount(){
      return Account_number;

    }

     // setter for balence
    int setbalence(int money){
       Balence = money;
       return Balence;
    }

     // getter for balence
    int getbalence(){
      return Balence;
    }

};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
     BankAccount BA;
      BA.setaccount(12345);
      BA.setbalence(50000);

      cout << "Account number is : " << BA.getaccount() << endl;
      cout << "Account balence is : " << BA.getbalence() << endl;

      BA.deposit();
      BA.withral();
      BA.Getbalence();

    return 0;
}