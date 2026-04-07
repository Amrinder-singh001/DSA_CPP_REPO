//CHAPTER = OOPS(OBJECT ORIENTED PROGRAMMING)
// SAMPLE EXAMPLE OF CREATING (CLASSES AND OBJECTS)
// #include <iostream>
// using namespace std;

// class Student{
//     public:       // this is to be public and can be accessable in main function and others functions.
//        string name;
//        float  cgpa;

//     void getpercentage(){
//         cout << "Percentage : " << (cgpa * 10) << endl;
//     }

//     private:       // this can be private and nor accessable in main function.
//      void getHello(){
//         cout << "Hello World\n";
//     }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
   
//      Student s;
//         s.name = "Amrinder singh";
//         s.cgpa = 9.5;
//          cout << "Name is : " << s.name << endl;
//          cout << "Cgpa is : " << s.cgpa << endl;
//           s.getpercentage();
//     return 0;
// }



// GETTERS AND SETTERS
// #include <iostream>
// #include <vector>
// using namespace std;

// class Student{

//        string name;    // this both is to private
//        float  cgpa;

//     public: 
//     // setters for name
//     void setname(string nameval){
//      name = nameval;
//     }

//     // setters for cgpa
//     void setcgpa(float cgpaval){
//      cgpa = cgpaval;
//     }

//     // getters for name
//     string getname(){
//      return name;
//     }

//     // getters for cgpa
//     float getcgpa(){
//     return cgpa;
//     }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
   
//      Student s;
//           s.setname("Amrinder singh\n");  
//           s.setcgpa(9.5);

//           cout << s.getname();
//           cout << s.getcgpa() << "\n";

//     return 0;
// }



// // constructor in c++
// #include <iostream>
// using namespace std;
// class car{
//     string name;
//     string color;

// public:

//     car(){
//         cout << "Constructer without parameters\n";
//     }
//     car(string nameval, string colorval){   // constructor has parmeters
//         cout << "constructor is automatically called when object being created\nAND this constructor has parameters\n";
//         name = nameval;
//         color = colorval;
//     }   

//       // (this ->) yeh use hota hai tab jab hamare pass objects ka names and constructer ka andar parameter ka names same ho yeh un dono ke beech ka diff batata hai. this-> hamari class ko pointe karta hain 
//     //   car(string name, string color){
//     //     cout << "constructor has parmetrized"\n";
//     //     this-> name = name;
//     //     this -> color = color;
//     // }

//     void start(){
//         cout << "Car hs started\n";
//     }

//     void stop(){
//         cout << "Car hs stopped\n";
//     }

//     string getname(){
//         return name;
//     }

//     string getcolor(){
//         return color;
//     }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     car c0;
//     car c1("Swift Dzire 500", "solid black\n");\
//     car c2("fortuner", "solid white\n");
//     cout  << "car Model name : " << c1.getname() << endl;
//     cout << "car color is : " << c1.getcolor() << endl;
//     return 0;
// }




// COPY CONSTRUCTER IN C++
// #include <iostream>
// using namespace std;
// class car{

//  public:   

//     string name;
//     string color;

//     car(string nameval, string colorval){   // constructor has parmeters
//         cout << "constructor is automatically called when object being created AND this constructor has parameters\n";
//         name = nameval;
//         color = colorval;
//     }

//     // own custom copy cunstructor (made by user)
//     car(car &orignal){   // constructor has reference of orignal
//         cout << "copying orignal to new...\n";
//         name = orignal.name;
//         color = orignal.color;
//     }

// };
// int main() {

//     car c1("Swift Dzire 500", "solid blue");
//     car c2(c1);
//     cout << "car Model name : " << c2.name << endl;
//     cout << "car color is : " << c2.color << endl;
//     return 0;
// }





// [SHALLOW AND DEEP COPY IN C++]
// #include <iostream>
// using namespace std;
// class car{

//  public:   

//     string name;
//     string color;
//     int *mileage;   // store mileage of car.

//     car(string nameval, string colorval){ // constructor has parmeters
//         name = nameval;
//         color = colorval;
//         mileage = new int;  // dynamic memory allocaton for mileage
//         *mileage = 12;      // this will store the value of mileage through dereference 
//     }

//     // own custom copy cunstructor (made by user)
//     car(car &orignal){   // constructor has reference of orignal
//         cout << "copying orignal to new...\n";
//         name = orignal.name;
//         color = orignal.color;
//         mileage = orignal.mileage; // this will store the adress of mileage and copy the adderes of mileage pointer from constructerc1 to another constructer c2. 
// }
// };
// int main() {

//     car c1("Swift Dzire 500", "solid blue");
//     car c2(c1);
    
//     cout << "car Model name : " << c2.name << endl;
//     cout << "car color is : " << c2.color << endl;
//     cout << *c2.mileage << endl;
//     *c2.mileage = 10;
//     cout << *c1.mileage << endl;   
//     cout << *c2.mileage << endl;   
//     return 0;
// }



// DESTRUCTER in c++
// #include <iostream>
// using namespace std;
// class car{

//  public:   

//     string name;
//     string color;
//     int *mileage;   // store mileage of car.

//     car(string nameval, string colorval){ // constructor has parmeters
//         name = nameval;
//         color = colorval;
//         mileage = new int;  // dynamic memory allocaton for mileage
//         *mileage = 12;      // this will store the value of mileage through dereference 
//     }

//     // own custom copy cunstructor (made by user)
//     car(car &orignal){   // constructor has reference of orignal
//         cout << "copying orignal to new...\n";
//         name = orignal.name;
//         color = orignal.color;
//         mileage = orignal.mileage; // this will store the adress of mileage and copy the adderes of mileage pointer from constructerc1 to another constructer c2. 
// }

//     ~car(){
//         cout << "DeAllocate memory automatically for statically objects which have created\n";
//         if(mileage != NULL){
//             delete mileage;
//             mileage = NULL;
//         }
//     }
// };
// int main() {

//     car c1("Swift Dzire 500", "solid blue");
    
//     cout << "car Model name : " << c1.name << endl;
//     cout << "car color is : " << c1.color << endl;
//     cout << *c1.mileage << endl;
//     return 0;
// }




// INHERITENCE IN C++
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     string color;

//     void eat(){
//         cout << "Animal are eating\n";
//     }

//     void sleep(){
//         cout << "All animals are sleeping\n";
//     }

//       void breathe(){
//         cout << "All animals are breathing\n";
//     }
// };

// class Fish : public Animal{
//     public:
//     int fins;

//     void swim(){
//         cout << "All fishes to do swim\n";
//     }
// };
// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);

//    Fish f1;
//     f1.fins = 3;
//     cout << "No of fins can fish have : " << f1.fins << endl;
//     f1.eat();
//     f1.sleep();
//     f1.breathe();
//     f1.swim();
    
//     return 0;
// }



// // SINGLE LEVEL INHERITENCE
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     string color;

//       void breathe(){
//         cout << "All animals are breathing\n";
//     }

//     void eat(){
//         cout << "Animal are eating then\n";
//     }

//     void sleep(){
//         cout << "All animals are moved to sleeping\n";
//     }
// };

// class Mammal : public Animal{
//     public:
//     void bloodtype(){
//         cout << "Mmmal have warm blood\n";
//     }
// };
// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);
    
//     Mammal m1;
//     m1.breathe();
//     m1.eat();
//     m1.sleep();
//     m1.bloodtype();

//     return 0;
// }



//MULTILEVEL LEVEL INHERITENCE
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     string color;

//     void breathe(){
//         cout << "All animals are breathing\n";
//     }

//     void eat(){
//         cout << "Animal are eating then\n";
//     }

//     void sleep(){
//         cout << "All animals are moved to sleeping\n";
//     }
// };

// class Mammal : public Animal{
//     public:
// we can also create constructer for class Mammal.
//      string bloodtype;
//      Mammal(){
//        bloodtype = "warm";
//      }
//     // void bloodtype(){
//     //     cout << "Mmmal have warm blood\n";
//     // }
// };

// class dog : public Mammal{
//     public:

//     void tailwag(){
//         cout << "A dog wag its tail\n";
//     }
// };

// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);
    
//    dog d1;
//     d1.breathe();
//     d1.eat();
//     d1.sleep();
//     // d1.bloodtype();
//     d1.tailwag();
//     cout << d1.bloodtype << endl;  // constructer call hoga 
//  return 0; 
// }





//MULTIPLE INHERITENCE
// #include <iostream>
// using namespace std;

// class teacher{
//      public:
//     int salary;
//     string subjects;
// };

// class Student{
//     public:
//      long rollno;
//      float cgpa;
// };

// class TA : public teacher, public Student{
//      public:
//    string name;
// };

// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);
//      TA ta1;
//      ta1.name = "Amrinder singh";
//      ta1.subjects = "c++, java, phyton";
//      ta1.rollno = 25011009030;
//      ta1.cgpa = 9.5;
//      ta1.salary = 90000;

//        cout << ta1.name << endl;
//        cout << ta1.subjects << endl;
//        cout << ta1.rollno << endl;
//        cout << ta1.cgpa << endl;
//        cout << ta1.salary << endl;
//  return 0;
// }




//HIERARCIAL INHERITENCE
// #include <iostream>
// using namespace std;

// class Animal{
//   public:
//     void breathe(){
//         cout << "Animal can breathe\n";
//     }

//     void eat(){
//         cout << "amnimals can eats\n";
//     }
// };

// class Bird : public Animal{
//     public:
//     void fly(){
//         cout << "Birds can fly\n";
//     }
// };   


// class Fish : public Animal{
//     public:
//     void swim(){
//         cout << "Fishes can swim\n";
//     }
// };   

// class Mammal : public Animal{
//     public:
//     void Walk(){
//         cout << "Mammal can walk\n";
//     }
// };   

// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);
     
//      Bird b;
//      Fish f;
//      Mammal m;

//      b.fly();
//      f.swim();
//      m.Walk();

//  return 0;
// }



//POLYMORPHISM IN C++
//IT HAS TWO TYPES OF POLYMORPHISM
// 1. COMPILE TIME POLYMORPHISM
//    .Function overloading
//    .Operator overloading
// 2. RUN TIME POLYMORPHISM

// 1.  COMPILE TIME (also called function overloading) => same same function in one single class but different different parameters and argumanets and compiler will choose automatically which function is to be called based on their arguments.
// Function Overloading
// #include <iostream>
// using namespace std;

// class polymorphism{
//     public : 

//     // EXAMPLE 1
//     void show(int x){
//         cout << "int values is : " << x << endl;
//     }  

//     void show(string str){
//         cout << "string words is : " << str << endl;
//     }  

//     // EXAMPLE 2
//     int add(int a, int b){
//         return a+b;
//     }

//     double add(double a, int b){
//         return a+b;
//     }

//     double add(int a, double b, int c){
//         return a+b+c;
//     }

//     // ALL IN THE ABOVE SHOWING FUNCTION OVERLOADING AND THIS PROCESS IS CALLED COMPILE TIME POLYMORPHISIM
// };

// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);

//         polymorphism phor;

//         // EX 1
//         phor.show(10);
//         phor.show("Amrinder singh");
//         // EX 2
//         cout <<  phor.add(2, 4) << endl;
//         cout <<  phor.add(23.34, 34) << endl;
//         cout <<  phor.add(2, 12.23, 5) << endl;

//    return 0;
//  }


 // 1.  COMPILE TIME (also called Operator overloading) => same same function but different different parameters and argumanets and compiler will choose automatically which function is to be called based on their arguments.
// Operator Overloading
 
//  #include <iostream>
// using namespace std;

// class complex{
//   public : 
//     int real;
//     int imaginary;

//      complex(int r, int i){
//          real = r;
//          imaginary = i;
//      }

//      void shownum(){
//           cout << "Complex number is : " << real << " + " << imaginary << "i" << endl;
//      }
//     // Operator Overloadingfor(+)
//      complex operator + (complex &c2){
//          int resreal = this->real + c2.real;
//          int resimg = this->imaginary + c2.imaginary;
//          complex c3(resreal, resimg);
//          return c3;
//      }
//     // Operator Overloading for(-)
//       complex operator - (complex &c2){
//          int resreal = this->real - c2.real; 
//          int resimg = this->imaginary - c2.imaginary;
//          complex c3(resreal, resimg);
//          return c3;
//      }
//     // ALL IN THE ABOVE SHOWING OPerator OVERLOADING AND THIS PROCESS IS CALLED COMPILE TIME POLYMORPHISIM
// };

// int main() {
//     ios::sync_with_stdio(true);
//     cin.tie(NULL);
//     complex c1(1,3);      // this will intialize the values
//     complex c2(2,5);      // this also will intialize the values
       
//     c1.shownum();         // this actally perfrom task
//     c2.shownum();         // this also actally perfrom task

//     cout << "Addition of real and imaginary part is \n";
//  // complex c3 = c1 + c2;  // for (+)
//     complex c3 = c1 - c2;
//     c3.shownum();

//    return 0;
//  }




 // 1.  RUN TIME (also called Function overriding) => same same function in different different classes (inheritence wali means parent and child class) and compiler will not choose but it will choose which function is to be call at the process of (run time). main function mei jiski object banegi uski hi class ka function call hoga.
// Function Overriding

// #include <iostream>
// using namespace std;

// class Parent{
//   public:
//      void show(){
//        cout << "Parent class called huyi during run time\n";
//      }
// };

// class child : public Parent {
//   public:
//      void show(){
//        cout << "child class called huyi during run time\n";
//      }
// };

// int main() { 
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     child c;
//     c.show();
    
//     return 0;
// }



// VIRTUAL FUNCTION 
// COMES UNDER IN RUN TIME POLYMORPHISM

// #include <iostream>
// using namespace std;

// class Parent{
//   public:
//      void show(){
//        cout << "Parent class called huyi during run time\n";
//      }

//      virtual void hello(){
//         cout << "this is virtual function\n";
//      }

// };

// class child : public Parent {
//   public:
//      void show(){
//        cout << "child class called huyi during run time\n";
//      }

//       void hello(){
//         cout << "child's helo\n";
//       }

// };

// int main() { 
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     child c;
//     Parent *ptr;

//     ptr = &c;
//     ptr->hello();
    
//     return 0;
// } 




// ABSTRACT CLASS & PURE VIRTUAL FUNCTION 
// #include <iostream>
// using namespace std;

// class shape{
//   public:

//   virtual void draw() = 0;  // This is known as abstract class, pure virtual function, abstract function
// };

// class circle : public shape {
//   public:

//   void draw(){
//     cout << "Circle is drawned\n";
//   }
// };

// class square : public shape {
//   public:

//   void draw(){
//     cout << "square is drawned\n";
//   }
// };

// class Rectangle : public shape {
//   public:

//   void draw(){
//     cout << "Rectangle is drawned\n";
//   }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     circle c;
//     c.draw();
    
//     square s;
//     s.draw();

//     Rectangle r;
//     r.draw();
    
//     return 0;
// }   




// STATIC KEYWORD IN C++
// // for variables in functions
// #include <iostream>
// using namespace std;

// void count1(){
//   static int count = 0;
//   count++;
//   cout << "Count : " << count << endl;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
  
//    count1();
//    count1();
//    count1();
//    count1();
//     return 0;
// }


// for variables in class
// #include <iostream>
// using namespace std;

// class Example{
//   public:
//     static int x;

// };

// int Example::x = 0;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     Example eg1;
//     Example eg2;
//     Example eg3;

//     cout << eg1.x++ << endl;
//     cout << eg2.x++ << endl;
//     cout << eg3.x++ << endl;
    
//     return 0;
// }



// FRIEND CLASS AND FUNCTION
#include <iostream>
using namespace std;

 class frend1{
   string secret = "Secret data";
   friend class frend2;   //frend2(derived class) ko freind bna do frend1(base class) ka jisse frend2(derived class) frend1(base class) ke private members ko access kar payega.
   friend void revealsecret(frend1 &frend2); 
 };

 class frend2{  // frend2 class becomes a {freind} of (class frend1) thats why (class frend2) can access the private propperties of frend1 class.
  public:
   void showsecret(frend1 &frend2){
         cout << frend2.secret << endl;
   }
 };

   void revealsecret(frend1 &frend2){
     cout << frend2.secret << endl;
   }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    frend1 frn1;
    frend2 frn2;

    // frn2.showsecret(frn1);
    revealsecret(frn1);
    return 0;
}