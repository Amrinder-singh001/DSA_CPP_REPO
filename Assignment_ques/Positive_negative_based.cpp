#include <iostream> 
using namespace std;

int main() {
    int n;

    cout << "Enter the number : ";
    cin >> n;

    if(n > 0){
        cout << n << " Is Positive Number\n";
    }else if(n < 0){
        cout << n << " Is Negative Number\n";
    }else{
        cout << n << " Is Zero Number\n";
    }

    return 0;
}

