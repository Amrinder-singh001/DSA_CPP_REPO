#include <iostream>
using namespace std;

void Touppercase(char words[], int n){
    for(int i=0; i<n; i++){
        char ch = wrds[i];

        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }else{
            words[i] = ch - 'a' + 'A';
        }
    }
}
int main() {
    // char words[] = {'a','p','P','L','e'};
    char words[] = {"Hello how are youu"};

    Touppercase(words, strlen(words));


    cout << words << endl;
return 0;
}