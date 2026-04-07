// RECURSIVE FUNCTION FOR PRINT NUMBERS IN DECREASING ORDER
#include <iostream>
using namespace std;
int decrese(int n){
    if(n == 1){
       return 1;
    }else{
       cout << n << " ";  // yeh mera kam hai ki muhje kya kaam perfom karvana hai 
       return decrese(n-1);  // yeh btayega ki har ek recursive call mei konsi value call hogi 
       cout << endl;

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

      int n = 100;
        cout << "Numbers in decreasing order : "  << decrese(n) << " ";
        cout << endl;
    return 0;
}