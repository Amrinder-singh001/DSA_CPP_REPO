#include <iostream>
using namespace std;

int getnextchar(char ch){
   if(ch == 'z'){
    return 'a';
   }else{
    return ch+1;
   }
}
int main(){
    cout << getnextchar('b') << endl;
    return 0;
}