#include <iostream> 
using namespace std;

int main() {
     float pen, pencil, Eraser, Totalcost;
          cout << "Enter cost of Pen : ";
          cin >> pen;

          cout << "Enter cost of Pencil : ";
          cin >> pencil;

          cout << "Enter cost of Eraser : ";
          cin >> Eraser; 

          float TotalCost = (pen+pencil+Eraser);

          cout << "Total cost is : " << TotalCost << endl; 
          cout << "Total cost with 18% GST : " << (Totalcost +(0.18 * TotalCost)) << endl; 
        


    return 0;
}

