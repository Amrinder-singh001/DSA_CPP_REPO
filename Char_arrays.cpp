// // CHAPTER 11
// // CHARECTER ARRAY'S AND STRINGS 

// #include <iostream>
// using namespace std;

// int main() {

//     //  char ch = 'a';
//     //  cout << (int)ch << endl;  // for checking ASCII values.

//     //  char ch1 = 'F';
//     //  int pos = ch1 - 'A';      // for finding postion of 'F' char.

//     //  cout << pos << "\n";      // for printing the postion of 'F' char.

//     //  CREATE CHARECTER ARRAY
//         // char arr[] = {'A', 'm', 'r', 'i', 'n', 'd', 'e', 'r', 'S', 'i', 'n', 'g', 'h', '\0'};
//         // cout << arr << endl;

//         // CREATE AND  OUTPUT OF CHAR ARRAY.
//         //1.
//         // char work1[] = {"Hello World"};
//         // cout << work1 << endl;

//         //2.
//         // char work2[5] = {"code"};
//         // cout << work2 << endl;

//         //3.
//         // char work3[] = {'c', 'o', 'd', 'e', '\0'};
//         // cout << work3 << endl;

//         //4.
//         // char work4[50] = {'c', 'o', 'd', 'e', '\0'};
//         // cout << work4 << endl;


//         // INPUT OUR CHAR ARRAY 
//         // char arr1[30];
        
//         // cout << "Enter your string words : ";
//         // cin >> arr1;   // This is ignores the whitespaces when we write a string. 
        
//         // cout << "Your words was : " << arr1 << endl;
//         // cout << "Your words Length : " << strlen(arr1) << endl;




//         // FOR PRINTING FULL STRING WORDS WITH ALLOWED WHITE SPACES
//         // char sentence[100];
        
//         // cout << "Enter your string words : ";
//         // cin.getline(sentence, 100);   // This is ignores the whitespaces when we write a string. 
        
//         // cout << "Your words was : " << sentence << endl;
//         // cout << "Your words Length : " << strlen(sentence) << endl;
    
// return 0;
// }



// FOR PALINDROME
// #include <iostream>
// using namespace std;
 
//  bool palindrome(char word[] ,int n){
//     int start = 0;
//     int end = n-1;

//     while(start <= end){
//         if(word[start++] == word[end--]){
//              cout << "valid Palindrome\n";
//              return true;
//         }else{
//              cout << "Not Valid Palindrome\n";
//             return false;
//         }
//     }
//         return -1;
//  }
// int main() {
    
//     char word[] = {"1221"};
//     palindrome(word, strlen(word));

// return 0;
// }



// COPY ONE STRING TO ANOTHER 
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // FOR COPYING ONR STRING TO ANOTHER STRINGS 
    char str1[100];
    char str2[100] = "Hello world";

    strcpy(str1, str2);   // inbuilt function in c++ in {#include <cstring>} in this header file 
    cout << "str1 : " << str1 << endl;


    // FOR JOINING TWO STRINGS 
    char str3[100] = "Hello How";
    char str4[100] = " are you.";

    strcat(str3,str4);
    cout << str3 << endl;


// FOR COMPARING TWO STRINGS     
char str5[100] = "XYZ";
char str6[100] = "ABC";

     cout << strcmp(str5, str6) << endl;  // this give positive values.


char str7[100] = "ABC";
char str8[100] = "XYZ";

     cout << strcmp(str7, str8) << endl;  // this give negative values.

return 0;
}