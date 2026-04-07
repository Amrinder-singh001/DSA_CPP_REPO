#include <iostream>
using namespace std;

void reverse(char word[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
         swap(word[start], word[end]);
         start++;
         end--;
    }
       cout << "REVERSE OF STRING IS : "<< word <<  endl;
        
}
int main() {
     char word[] = {
        "CODE"
     };

      reverse(word, strlen(word));
      
        
return 0;
}