// CHAPTER VECTORS IN C++


// BASIC KNOWLEDGE OF DYNAMIC MEMORY ALLOCATION
// #include <iostream>
// using namespace std;

// int main(){
//    // This is called Staic memory allocation 
//    // int arr[100] = {1,2,3,4,5}; // intaillize values at compile time in memory 

//    // This is called Dynamic memory allocation 
//     int size;

//     cout << "Enter the size of array(used dynamic memory allocation) : ";
//     cin >> size;

//     int *arr = new int[size];
//     int x = 1;

//     for(int i=0; i<size; i++){
//         arr[i] = x;
//         cout << arr[i] << " ";
//         x++;
//     }
//      cout << endl;
//      return 0;

// }

// uses of (delete) keyword.
// #include <iostream>
// using namespace std;

// void func(){
//    int size;

//     cout << "Enter the size of array(used dynamic memory allocation) : ";
//     cin >> size;

//     int *ptr = new int[size];
//     int x = 1;

//     for(int i=0; i<size; i++){
//         ptr[i] = x;
//         cout << ptr[i] << " ";
//         x++;
//     }
//      cout << endl;

//      delete [] ptr;    // (delete) keyword uses for deleting dynamic memory allocation from heap memory after the function return the value to main function. 
// }

// int main(){

//         func();
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int* func(){
//      int *ptr = new int;
//      *ptr = 1200;
//      cout << "Ptr points to : " << *ptr << endl;

//      return ptr;
// }
 
// int main(){

//         int *x = func();
//         cout << *x << endl;    
//     return 0;
// }


// 2D DYNAMIC MEMORY ALLOCATION 

// #include <iostream>
// using namespace std;

// int main(){

//         int rows, cols;
//         cout << "Enter rows : ";
//         cin >> rows;
//         cout << "Enter colomns : ";
//         cin >> cols;

//         int* *matrix = new int* [rows];

//         for(int i=0; i<rows; i++){
//           matrix[i] = new int[cols];
//         }

//         //data store
//         int x=1;

//         for(int i=0; i<rows; i++){
//          for(int j=0; j<cols; j++){
//             matrix[i][j] = x++;
//             cout << matrix[i][j] << " ";

//          }
//            cout << endl;  
//         }
//     return 0;
// }


// VECTORS IN C++

// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){

//    // 1 method to print vector
//    vector <int> vec1;
//    cout << "Size of vector arrays : "<< vec1.size() << endl;

//    // 2 method to print vector with intialize with elements;
//        vector <int> vec2 = {1,2,3,4,5};
//          cout << vec2[4] << endl;


//    // 3 method to print vector with intialize with elements;
//        vector <int> vec3 = {1,2,3,4,5};
       
//        for(int i=0; i<vec3.size(); i++){
//          cout << vec3[i] << " ";    
//        }
//           cout << endl;

//     // 3 method to print vector with intialize with elements;
//         vector <int> vec4(10,789895);
       
//        for(int i=0; i<vec4.size(); i++){
//          cout << vec4[i] << " ";    
//        }
//    return 0;
// }

 
// -std=c++17  :) To use modren library functions of STL (standard template library).
// Example :)
// g++ -std=c++11 Vectors.cpp && ./a.out



// This code for to check our STL(verision) konsa use ho rha hai
// #include <iostream>
// using namespace std;

// int main() {
//     cout << __cplusplus;
//     return 0;
//}  



// VECTOR IMPLEMENTATION IN MEMORY 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        vector <int> vec = {1,2,3,4};
                cout << "Size of vector is : " << vec.size() << endl;           //4 
                cout << "capacity of vector is : " << vec.capacity() << endl;   //4

            vec.push_back(5);    // add element in last of vector array         //5
                cout << "Size of vector is : " << vec.size() << endl;           //5
                cout << "capacity of vector is : " << vec.capacity() << endl;   //8
           
            vec.pop_back();      // delete last element from vector             //5
                cout << "Size of vector is : " << vec.size() << endl;           //4
                cout << "capacity of vector is : " << vec.capacity() << endl;   //8

            vec.push_back(6);    // add element in last of vector array              
                cout << "Size of vector is : " << vec.size() << endl;           //5
                cout << "capacity of vector is : " << vec.capacity() << endl;   //8

            
            vec.push_back(7);    // add element in last of vector array              
                cout << "Size of vector is : " << vec.size() << endl;           //6   
                cout << "capacity of vector is : " << vec.capacity() << endl;   //8
                          
    return 0;
}