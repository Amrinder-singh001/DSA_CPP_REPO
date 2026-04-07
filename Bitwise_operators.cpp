// // BITWISE OPERATORS IN C++
// // 1 BITWISE AND(&)

// #include <iostream>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//         int n1, n2;
//             cout << "Enter first value for AND : ";
//             cin >> n1;
//             cout << "Enter second value for And : ";
//             cin >> n2;

//             cout << "Bitwise (AND) of " << n1 << " AND " << n2 << " is : " << (n1&n2) << endl;   

// // 2 BITWISE OR(|)
//         int n3, n4;
//             cout << "Enter first value for OR : ";
//             cin >> n3;
//             cout << "Enter second value for OR : ";
//             cin >> n4;

//             cout << "Bitwise (OR) of " << n3 << " OR " << n4 << " is : " << (n3|n4) << endl;   



// // 3 BITWISE XOR(^)
//         int n5, n6;
//             cout << "Enter first value for XOR : ";
//             cin >> n5;
//             cout << "Enter second value for XOR : ";
//             cin >> n6;

//             cout << "Bitwise (XOR) of " << n5 << " XOR " << n6 << " is : " << (n3^n4) << endl;  


// // clang++ -std=c++17 Bitwise_operators.cpp && ./a.out 

// // 4 BITWISE NOT(ONE'S COMPLEMENT)(^)
//         int n7;
//             cout << "Enter the value for NOT : ";
//             cin >> n7;

//             cout << "Bitwise (NOT) of " << n7 << " is : " << (~n7) << endl; 


// // 5 BITWISE LEFTSHIFT(<<)
//         int n8, n9;
//             cout << "Enter the first value for LEFTSHIFT : ";
//             cin >> n8;
//             cout << "Enter the second value for LEFTSHIFT : ";
//             cin >> n9;

//             cout << "Bitwise (LEFTSHIFT) of " << n8 << " << " << n9 << " is : " << (n8<<n9) << endl;  


// // 6 BITWISE RIGHTSHIFT(<<)
//         int n10, n11;
//             cout << "Enter the first value for RIGHTSHIFT : ";
//             cin >> n10;
//             cout << "Enter the second value for RIGHTSHIFT : ";
//             cin >> n11;

//             cout << "Bitwise (RIGHTSHIFT) of " << n10 << " >> " << n11 << " is : " << (n10>>n11) << endl;              
//             return 0;
// }



// CHECK NUMBER IS EVEN OR ODD USING BITS OPERATIONS. THIS PROCESS IS CALLED BITMASK
// #include <iostream>
// using namespace std;

// void isevenorodd(int num){
//     if((num & 1) == 1){
//         cout << "Odd number\n";          //if Right (MSB)== 1 then it is odd number
//     }else{                               //if Right (MSB) == 0 then it is even number
//         cout << "Even number\n";         // MSB = Most Significant Bit
//     }
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//            int num;
//            cout << "Enter number : ";
//            cin >> num;

//            isevenorodd(num);

//     return 0;
// }


// // GET ITH BIT
// #include <iostream>
// using namespace std;

// int getithbit(int num, int i){
//     int bitmask = 1 << i;

//     if((bitmask & num) == 0){
//        return 0;
//     }else{
//         return 1;
//     }
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
        
//          int num;
//             cout << "Enter number : ";
//             cin >> num;
//            cout <<  getithbit(num, 3);
//     return 0;
// }



// SET ITH BIT
// #include <iostream>
// using namespace std;

// int getithbit(int num, int i){
//     int bitmask = 1 << i;
//        return (bitmask | num);
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
        
//          int num;
//             cout << "Enter number : ";
//             cin >> num;
//            cout <<  getithbit(num, 3) << endl;
//     return 0;
// }


// CLEAR ITH BIT
// #include <iostream>
// using namespace std;

// int clearithbit(int num, int i){
//     int bitmask = ~(1 << i);
//        return bitmask & num;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
        
//          int num;
//             cout << "Enter number : ";
//             cin >> num;
//            cout <<  clearithbit(num, 3) << endl;
//     return 0;
// } 


// FOR CHECK A GIVEN NUMBER IS POWER OF TWO OR NOT (2^1, 2^2, 2^3, 2^4.......)
// #include <iostream>
// using namespace std;

// int AND(int num1, int num2){
//     if((num1 & num2) == 0){
//          cout << "My Number is Power Of 2\nBecause AND of " << "(" << num1 << "," << num2 << ")" << " is == " << (num1&num2) << endl;
//     } else{
//         cout << "My Number is Not Power Of 2\nBecause AND of " << "(" << num1 << "," << num2 << ")" << " is != (0) and the (AND) is = " << (num1&num2) << endl;
//     }
//         return (num1&num2);
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
        
//          int num1;
//             cout << "Enter number : ";
//             cin >> num1;

//            cout <<  AND(num1 , (num1-1)) << endl;
//     return 0;
// } 


//CLEAR LAST ITH BITS 
// #include <iostream>
// using namespace std;

// void updateithbit(int num, int i){
//     int bitmask = (~0<<i);
//     cout << (num & bitmask) << endl;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//        updateithbit(15 , 2);    // 12
 
//     return 0;
// }



#include <iostream>
using namespace std;

int countsetbits(int num){
    int count = 0;
    while (num > 0){
        int lastdig = (num&1);
        count += lastdig;

       num = num >> 1;
    }
     cout << count << endl;
     return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

       countsetbits(10); //2 
       countsetbits(7);  //3
 
    return 0;
}