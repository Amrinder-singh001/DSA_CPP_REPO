#include <iostream>
#include <string>

using namespace std;
bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "NOT VALID ANAGRAMS\n";
        return false;
    }

    int count[26] = {0};
      for(int i=0; i<str1.length(); i++){
        int idx = str1[i]-'a';
        count[idx]++;
      }

      for(int i=0; i<str2.length(); i++){
        int idx2 = str2[i]-'a';
        if(count[idx2] == 0){
            cout << "NOT VALID ANAGRAMS\n";
            return false;
        }
        count[idx2]--;
      }
        cout << "VALID ANAGRAMS\n";
        return true;
}
int main(){
        string str1 = "cat";
        string str2 = "rat";

        isAnagram(str1, str2);

        return 0;          
}
