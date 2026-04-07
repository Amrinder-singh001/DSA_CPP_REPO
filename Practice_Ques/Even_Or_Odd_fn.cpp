
#include <iostream>
using namespace std;

bool Evenodd(int a){       // Function for checking number is even or not. A is pasiing as an parameter.
    if(a%2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){

    int check = Evenodd(3);  // 3 is passing an Argument to function.
    cout << check << endl;

    return 0;
}