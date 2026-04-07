// RECURSIVE FUNCTION FOR PRINT NUMBERS IN INCREASING ORDER
#include <iostream>
using namespace std;

void decrese(int n){
    if(n == 1){
       return;
    }else{
        decrese(n-1);  // yeh btayega ki har ek recursive call mei konsi value call hogi 
        cout << n << " ";  // yeh mera kam hai ki muhje kya kaam perfom karvana hai. 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

      int n = 100;
      decrese(n);

    return 0;
}