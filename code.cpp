#include <iostream>
#include <string>

using namespace std;

int main() {

    // TO INTAILIZE OUR STRING   
    // string str = "Hello";
    // cout << str << endl;

    // TO UPDATE THE VALUE OF STRING.
    // str = "Yellow";
    // cout << str << endl;

    // TO INPUT STRING.
    // string str1;
    // cout << "Enter string : ";
    // cin >> str1;
    // cout << str1 << endl;    // THIS GIVES WHITE SPACES 


 // TO INPUT STRING. (WITHOUT WHITE SPACES)
    // string str2;
    // cout << "Enter string : ";
    // getline(cin , str2);
    // cout << str2 << endl;    // THIS GIVES WITHOUT WHITE SPACES 

    // we can access string indexes like array's.
    // FOR AMRIDER SINGH
    // cout << str2[0] << endl;
    // cout << str2[1] << endl;
    // cout << str2[2] << endl;
    // cout << str2[3] << endl;
    // cout << str2[4] << endl;
    // cout << str2[5] << endl;
    // cout << str2[6] << endl;
    // cout << str2[7] << endl;
    // cout << str2[8] << endl;
    // cout << str2[9] << endl;
    // cout << str2[10] << endl;
    // cout << str2[11] << endl;
    // cout << str2[12] << endl;
    // cout << str2[13] << endl;


    // USE OF FOR LOOP.
    // string str;
    // cout << "Enter String : ";
    // getline(cin , str);
        
    //  for(int i=0; i < str.length(); i++){
    //     cout << str[i] << "-";
    //  }
    //     cout << endl;  


    //  USE OF FOR EACH LOOP   (ESPECIALLY USED FOR CHAR STRINGS).

    // BASIC SYNTAX FOR (FOR EACH LOOP)
    //     for(char ch : str){     // STR  = ANY STRING NAME .
    //     // DO SOME WORK
    // } 
    // for(char ch : str){
    //     cout << ch << ":)";
    // } 
    //   cout << endl;


    //MEMBER FUNCTIONS IN C++ STRINGS
    string str = "HelloWorld";
    
      //1. str.length(); = used for string length
       cout << "STRING LENGTH : " << str.length() << endl;


      //2. str.at(); = used for string index
       cout << "AT INDEX NO 4 : " << str.at(4) << endl;   //o


      //3. str.substr(); = used for finding substring for any string in () we can pass the starting index , size of ending from start(indices wise)
       cout << str.substr(1,5) << endl;  // ellow. 



      //4. str.length(); = string length
       cout << str.find("Wor") << endl;        
       return 0;
}