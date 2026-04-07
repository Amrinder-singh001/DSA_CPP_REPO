#include <iostream>
using namespace std;

void printsubarrays(int *arr, int n){

    cout << "----------------------------------------\n";
    cout << "|subarrays index and elements like this|\n";
    cout << "----------------------------------------\n";

    for(int start=0; start<n; start++){               //i = start
        for(int end=start; end<=(n-1); end++){        //j = end
        // cout << "(" << start << "," <<  end << ")" << " ";   // subarrays index like this;  
          for(int i=start; i<=end; i++){
            cout << arr[i];                                  // subarrays elements like this; 
          }
            cout << "," << " ";    
        }   
          cout << endl;               
    }
}
int main() {
     int arr[] = {1,2,3,4,5};
     int n = 5;

     printsubarrays(arr , n);
return 0;
}

// Time complexcity is o(n^3) . Because each loop runs n time.



// For just calculating the value of INT_MAX and INT_MIN. These are the predefined macros in our header files.
// #include <iostream>
// using namespace std;

// int main() {
//     int MaxVal = INT_MAX;
//        cout << MaxVal << endl;     //INT_MAX = 2147483647, INT_MIN = -2147483648

//        int MinVal = INT_MIN;
//        cout << MinVal << endl;  
// return 0;
// }