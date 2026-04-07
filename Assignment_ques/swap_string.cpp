#include <iostream>
#include <string>
using namespace std;

bool swapstring(string s1, string s2){
    if(s1.length() != s2.length()){
      cout << "Length is not equal, Try again with same length!\n";
      return false;
    }

    char diffChar1, diffChar2; 
    int diff = 0;
    for(int i=0; i<s1.length(); i++){
      if(s1[i]!=s2[i]){ 
        if(!diff){
        diffChar1 = s1[i];
        diffChar2=s2[i];
        }else{
          if(s1[i] != diffChar2 || s2[i]!= diffChar1){
            return false;
            }
         }
      }
    }
}
int main(){
      
      string s1 = "bank";
      string s2 = "kanb";

     swapstring(s1, s2);
    return 0;
}