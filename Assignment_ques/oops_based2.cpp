#include <iostream>
using namespace std;
class person{
  public:
   string name;
   int age;
   int id;

};

class student : public person{
    public:
    int student_id;
    //   void displaystudentinfo(string name, int age, int id){
    //       this->name = name;
    //       this-> age = age;
    //       this-> id = id;
    //   }

    student(string name , int age, int id){    //parametrized constructer
          this->name = name;
          this-> age = age;
          this-> id = id;
    }         
          // getter
          string getname(){
             return name;
          }        
          // getter
          int getage(){
             return age;
          }

          int getid(){
             return id;
          }

};

       
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   student std("Amrinder singh" , 19 , 2501100);
   cout << "Name : " << std.getname() << endl; 
   cout << "Age  : " << std.getage() << endl; 
   cout << "Id   : " << std.getid() << endl; 
   

    return 0;
}

