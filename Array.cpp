// chapter : 8
// All About Array's
// Linear collection of same data type of elelment that are stored togheter in contigous memory spaces.

// Diff methods to store arrays ;
// 1st is without intialzing the size  array.
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[] = {10, 20, 30, 40, 50, 60, 70,  80, 90, 100};

//        cout << "Array Elements : " << arr[10] << " ";   // 70
       
// return 0;
// }

// // 2st is with intialzing the size array.
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[10] = {10, 20, 30, 40, 50, 60, 70,  80, 90, 100};

//        cout << "Array Elements : " << arr[3] << " ";   // 70
       
// return 0;
// }


// 2st is with intialzing the size array.
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[10] = {10, 20, 30, 40, 50, 60, 70,  80, 90, 100};

//        cout << "Array Elements : " << arr[15] << " " << endl;   // 70
//        cout << "Length of an array : ) \n";
//        cout << sizeof(arr) / sizeof(int);

//        cout << endl;


// 3rd is with only intialzing the size array. 
// #include <iostream>
// using namespace std;

// int main() {
//      int arr[10];

//        cout << "Array Elements : " << arr[6] << " " << endl;   // 70
//        cout << "Length of an array : ) \n";
//        cout << sizeof(arr) / sizeof(int);

//        cout << endl;
       
// return 0;
// }

// how to access full array elements
// #include <iostream>
// using namespace std;

// int main() {
   //   int arr[50] = {1, 2, 3, 4, 5};

   //   for(int i=0; i<50; i++){
   //      cout << arr[i] << " ";
   //   }

   // print garbage value. :) without intializing the array's elements.
   // int arr[50];

   // for(int i=0; i<10; i++){
   //    cout << arr[0] << " ";
   // }


   // How to input array's size and array's elements

      // int n;

      // cout << "Enter the size of array : ";
      // cin >> n;
      
      // int arr[n];
      
      // cout << "Enter the elements of an array : \n";
      // for(int i=0; i<n; i++){
      //    cin >> arr[i];
      // }

      // for(int i=0; i<n; i++){
      //    cout << arr[i] << " ";
      // }
               
      //   int arr[5] = {1,2,3,12,5};
      //   for(int i=0; i<5; i++){
      //    cout << arr[i] << endl;
      //   }

      //  Arrays are pass by reference.
         //  int a = 10;
         //  int *ptr = &a;      // *ptr : my pointer name always starts with (*)
          
         //  cout << ptr << endl;  // This gives the adress of variable a
         //  cout << *ptr << endl; // This gives the actually value of a = 10

         //  int arr[10] = {1,2,3,4,5};

         //  cout << arr << endl;  // This print the adress of variable a Because in c++ array's is like a pointer.
         //  cout << *arr << endl; // This gives the arrays numbers based on index numbers . idx[0] : 1, idx[1] : 2, idx[2] : 3, and so on.... based on the array's size.  

         //  cout << *(arr+1) << endl;   
         //  cout << *(arr+2) << endl;
         //  cout << *(arr+3) << endl;
         //  cout << *(arr+4) << endl;      // instead of this we can use arr[0] like this.

//    return 0;
// }  
  
// Pass by reference;
#include <iostream>
using namespace std;

// void func(int arr[]){
//    arr[4] = 1000;
//  }
 

// void func2(int *ptr){
//    ptr[0] = 1000;
//  }
 
//  void Printarr(int nums[], int n){
//       for(int i=0; i<n; i++){
//          cout << nums[i] << endl;
//       }
//  }
int main() {
   //   int arr[10] = {1,2,3,4,5,6,7};    //arr[0] = 1   arr[4] = 5
   //     func(arr);      //passing array name is equivalent to passing the pointer.
   //     cout << arr[4] << endl;         //arr[0] = 1000  arr[4] = 1000

   //     func2(arr);      //both function will give same values.
   //     cout << arr[0] << endl;   

      //  int arr[] = {1,2,3,4,5};
      //  int n = sizeof(arr) / sizeof(int);   // size of arrays[arr]
      //   Printarr(arr , n);

      // // Array pointer
      // int x = 12;
      // int *ptr = &x;
      // cout << ptr << endl;   // adress of x = x7ffee0d9...78
       
      // int y = 25;
      // ptr = &y;
      // cout << *ptr << endl;  // actual of y = 25 


         //  // Arithmetic pointer
         // Increment Pointer.(ptr++)
         //  int x = 12;
         //  int *ptr = &x;
         //  cout << "Before increment\n";
         //  cout << ptr << endl;   // adress of x = x7ffee0d9...78
         //  ptr++;  //increment = ek integer space + hoti hai, int space = 4byte, then increment 4+ hogi
         //  cout << "After increment\n";
         //  cout << ptr << endl;   // adress of x = x7ffee0d9...7c


         //  char ch = 12;
         //  char *aptr = &ch;
         //  cout << "Before increment\n";
         //  cout << aptr << endl;   // adress of x = x7ffee0d9...78
         //  aptr++;  //increment = ek char space + hoti hai, char space = 1byte, then increment 1+ hogi
         //  cout << "After increment\n";
         //  cout << aptr << endl;   // adress of x = x7ffee0d9...7c
          
         // Decrement Pointer(ptr--)
         // int x = 12;
         //  int *ptr = &x;
          
         //  cout << "Before decrement\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee9604678

         //  ptr--;  //increment = four integer space - hoti hai, int space = 4byte, then decrement 4- hogi

         //  cout << "After decrement\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee9604674


         // Addition Pointer(ptr+3)
         // int x = 12;
         // int *ptr = &x;
          
         //  cout << "------------\n";
         //  cout << "Before +3 increment\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee475d678

         //  ptr = ptr+3;  //increment = one integer space + hoti hai, int space = 4byte, then increment 4+ hogi, same for 3 

         //  cout << "After +3 increment\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee475d684

         //   cout << "------------\n";
           
         // // subtraction Pointer(ptr-3) 
         //  cout << "Before -3 decrement\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee475d678

         //  ptr = ptr-3;  //increment = one integer space + hoti hai, int space = 4byte, then increment 4+ hogi, same for 3 

         //  cout << "After -3 decrement\n";
         //  cout << ptr << endl;   // adress of x = 0x7ffee475d684


         int a = 10;
         int *ptr1 = &a;
         int *ptr2 = ptr1+3;  // +3 add nhi karna balki 3 bytes of int space(memory or storsge) add karni hai es pointer (ptr1) mei;

         cout << ptr1 << endl;    // 0x7ffeec3df678
         cout << ptr2 << endl;    // 0x7ffeec3df684  . En dono mei 12 spaces ka farak hai vo kyuki ek int = 4space then  fout int = 3*4 = 12spaces.  
         
         cout <<"How many space(memory) is used in data type of(INT) : "<< ptr2-ptr1<< endl;  // this give the how many bytes of int space is used by these poinres. 
         
return 0;
}