// #include <iostream>
// using namespace std;

// int main() {
//      int a = 10;
//      int *pointer = &a;

//      cout << "a = " << a << " , " << "Adress of " << *pointer << " , "<< &a << endl;
//      cout << "a = " << *pointer << " , " << "Adress of " << *pointer << " , "<< pointer << endl;    // read point no : 2 

    //  Adress ko show karta hain :) &a(ampherset of a). a is any variable name. (*pointer(Asterrisk of pointer)). pointer is any pointer name. yeh apka actual variable ka value print karvaega. 
    //  2.aur jo sirf (pointer)(any pointer name) hota hain vo bhi apka variable ka adress hi hold karke rakhta hai.

    // Ek **pointer variable kaise dusre pointer variable ka adress store karta hain.
    //  int a = 10;
    //  int *pointer = &a;

    //  int **ptr = &pointer;   // pointer to pointer variable. aur iske ke andar hamere pointer variable ka adress store hoga.

    //  cout << "*pointer variable (ka Address) : " << &ptr << endl;

    // Ek pointer variable ko dereference kiase karte hian;
    // int b = 5;
    // int *poin = &b;
    // cout << &b << endl;
    // cout << "Dereference of pointer gives : " << *(&b) << endl;      // Gives the actual value of b(is any variable)
    // // working :) phele mujhe address milega variable (b) ka aise (&b). aur phir mei isko Dereference karunga aise *(&b). phir mujhe iski actual value milegi.


    // NULL POINTER 
    //    int *ptr;           //This gives the random address  of pointer variable. 
    //    int *ptr = NULL; 
    //    cout << ptr << endl;   // This Gives The Null Value Of Pointer Variable(0x0);
    //    cout << *ptr << endl;  // If I can dereference this pointer with(*) then this                            will show's error(segmentation fault);

// return 0;
// }


#include <iostream>
using namespace std;
  
void changeA(int a){      // pass by value;
   a = 20;
   cout << a << endl;
}

void changeB(int *ptr){      // pass by Refrence :) change in function = change in main array;
    
    *ptr = 20;
    cout << *ptr << endl;
 }

int main() {
     int a = 10;
     int b = 10;
     changeB(&a);
     cout << a << endl;
return 0;
}