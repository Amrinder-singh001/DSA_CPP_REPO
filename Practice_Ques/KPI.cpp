#include <iostream>
using namespace std;

int main() {

    float sales, rating, attendance;
    float kpi;

    cout << "Enter Sales Amount: ";
    cin >> sales;

    cout << "Enter Customer Rating (out of 5): ";
    cin >> rating;

    cout << "Enter Attendance Percentage: ";
    cin >> attendance;

    // KPI Calculation
    kpi = (sales * 0.5) + (rating * 30) + (attendance * 0.2);

    cout << "\nKPI Score = " << kpi << endl;

    // Performance Check
    if(kpi >= 90) {
        cout << "Performance: Excellent";
    }
    else if(kpi >= 75) {
        cout << "Performance: Good";
    }
    else if(kpi >= 50) {
        cout << "Performance: Average";
    }
    else {
        cout << "Performance: Poor";
    }

    return 0;
}