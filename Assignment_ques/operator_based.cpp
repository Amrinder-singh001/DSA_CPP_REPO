#include <iostream> 
using namespace std;

int main() {
    int x = 2, y = 5;
    int exp1 = (x*y/x);
    int exp2 = (x*(y/x));

    cout << "Exp1 = " << exp1 << endl;    // 5
    cout << "Exp2 = " << exp2 << endl;    // 4

}