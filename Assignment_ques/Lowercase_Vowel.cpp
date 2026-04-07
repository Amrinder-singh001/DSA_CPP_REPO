#include <iostream>
#include <string>
using namespace std;

void countvowel(string str){

    int count = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
               count++;
        }
    }
        cout << count << endl;
    
}
int main(){

    string str;

    cout << "Enter character : ";
    getline(cin , str);

     countvowel(str);
    return 0;
}