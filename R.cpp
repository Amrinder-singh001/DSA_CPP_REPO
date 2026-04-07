#include <iostream> 

// #define ll long long
using namespace std;

int main() {
    // ll x;
    // ll y;

    // cout << x;

    // known as Imlicit conversion.
    // cout << (10/3) << endl;        // int to int
    // cout << (10/3.0) << endl;      // int to float
    // cout << ('A' + 1) << endl;     // char to int
    // cout << ('a' + 0) << endl;     // char to int

    // // known as Explicit conversion.
    // float PI = 3.14;
    // cout <<  bool(10/7) << endl; 
    // cout <<  bool(0-0) << endl; 
    // cout <<  ((bool)3+2) << endl;        // int to bool
    // cout << (int)(PI) << endl;           // float to int
    // cout << ((float)10/3) << endl;       // int to float
    // cout << char('A' + 1) << endl;       //  int to char
    // cout << (23.5 + 2 + 'A' + 1) << endl; 


//   ASSIGNMENT OPERTAR;
    //  int a = 200;
    //  int b = ++a; 
        
    //  cout << "a = " << a << endl;  // 201
    //  cout << "b = " << b << endl;  // 201

    //  b = --a;  
    //  cout << "a = " << a << endl;  // 200
    //  cout << "b = " << b << endl;  // 200



    // int a = 12;
    // a++;   // a = 12, update = 13, a = 13 
    // ++a;   // a = 13, 13 = ++a, update = 14; a = 14
    // a--;   // a = 14, 14 = a--, a = 14, update = 13
    // --a;   // a = 13, 13 = --a, update = 12, a = 12 
    // cout << "a = " << a << endl;

    // RELATIONAL OPERATOR;
        //  int a = 2 , b = 3;
         
        //  cout << (a<b) << endl;    //1
        //  cout << (a>b) << endl;    //0
        //  cout << (a<=b) << endl;   //1
        //  cout << (a>=b) << endl;   //0
        //  cout << (a==b) << endl;   //0

    // Logical operator.
    // work => true => when both ans will be one(1);
            // False => when any one of the ans will be zero(0);
        // int a = 2, b = 3;
        // int c = 4, d = 4;

        // cout << ((a<b && b>a)) << endl;     // 1
        // cout << ((c<=d && c>=d)) << endl;   // 1
        // cout << ((c!=d && c>=d)) << endl;   // 0
        // cout << ((a>b && b>a)) << endl;     // 0
        // cout << ((a<b && b<a)) << endl;     // 0
        // cout << ((a>b && b<a)) << endl;     // 0


      // TERNARY OPERATOR
        //   bool isAdult;  // 1(true), 0(flase);
        //     int age;
        //         cout << "Enter your age : ";
        //         cin >> age;

        //         isAdult = (age >18)? true : false; 
        //         cout << "Am I Adult : " << isAdult << endl; 

        //         bool Num;
        //         int n;
        //            cout << "Enter The Number To Check Even Or Odd : ";
        //            cin >> n;

        //            Num = (n % 2 == 0)? true : false; 
        //            cout << "My Number is : " << Num << endl;
                   
    //   SWITCH CASE STATEMENT;
              // int day;
              //  cout << "Enter your day(1-7) : ";
              //  cin >> day;

              //  switch(day){
              //   case 1 :
              //     cout << "Sunday\n";
              //   break;
              //   case 2 :
              //     cout << "Monday\n";
              //   break;
              //   case 3 :
              //     cout << "Tuesday\n";
              //   break;
              //   case 4 :
              //     cout << "Wednesday\n";
              //   break;
              //   case 5 :
              //     cout << "Thursday\n";
              //   break;
              //   case 6 :
              //     cout << "Friday\n";
              //   break;
              //   case 7 :
              //     cout << "Saturday\n";
              //   break;

              //   default :
              //   cout << "Invalid choise " << endl;
 
              //  }
                   

              // Loops 
              // 1. Foor loop;
                // int n;
                // int i=1;
                //  cout << "Enter N : ";
                //  cin >> n;

                  // for(i=0; i<n; i++){
                  //   cout << i << ". "<< "Hello world\n";
                  // }

                  // for(i = 1; i <= n; i++){
                  //   cout <<"Apna collage \n";
                  // }

                //  for(i = 0; i <= n; i++){      // n = 5 // i=0, 0<5, cout = 0;
                //   cout << "I = " << i << endl; // i=1, i<5, cout = 1;  
                //  }                             // i=2, 2<5, cout = 2;
                                                  // i=3, 3<5, cout = 3;
                                                  // i=4, 4<5, cout = 4;
                                                  // i=5, 5<5, false, Exit from Loop.
                                                  // After exit print the output 
       
                // int sum = 0;
                //  for(i=1; i<=n; i++){
                //     sum = sum+i;
                    
                //  }                      
                //  cout << "Sum = " << sum << endl;  

                // while(i<n){
                //   cout << i << " \n";
                //   i++;
                // }

              // Do-While Loop; 
              // int n;
              // int i=1;
              //  cout << "Enter N : ";
              //  cin >> n; 

                // do {
                //   cout << i << " ";
                //   i++;
                // } while(i<=n);

                // Break Statement ;
                  // for(i = 1; i <= n; i++){
                  //   if(i == 5){
                  //     break;
                  //   }
                  //      cout << i << " ";
                  // }
                  //   cout << endl;
                  //   cout << "Loop is stop at " << i << " Because we will use Break statement\n";
               // Continue Statement;
                        // do{
                        //   if(i == 4){
                        //     continue;      // Skip iteration(single complete run).
                        //     i++;
                        //   }
                        //     cout << i << " ";
                        // }while(i<=n);
                        // cout << endl;
                    //   for(i=1; i<=n; i++){
                    //     if(i == 3){
                    //       continue;
                    //     }
                    //      cout << i << " ";
                    //  }
                    //    cout << endl;

                  // for(i=1; i>0; i++){
                  //    if(n%10 == 0){
                  //     continue;
                  //    }else{
                  //     cout << "Not Multipal of 10! try again\n";
                  //    }
                      
                  // }

                // Nested Loops
                // int n;
                // int i;
                //  cout << "Enter N : ";
                //  cin >> n; 

                //  for(i=1; i<=n; i++){
                //   for(int j=1; j<=n; j++){
                //     cout << i;
                //   }
                //     cout << endl;
                //  }
              //   int i;
              //  for(i=1; i<6; i++){
              //   if(i>3)
              //    continue;
              //  }
              //   cout << i << endl;

              int meal = 5;
              int tip = 2;

               int total = meal + (meal > 6 ? ++tip : --tip);
                cout << total;

    return 0;                                    
  }                             