// THROUGH METHOD ONE = BUBBLE SORT;
// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n){
     
//     cout << " MY SORTED ARRAY\n";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//         cout << endl;
// }
// void BubbleSort(int *arr, int n){

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){          // In Acending order. for dencending [<].
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//      }

//     printarray(arr, n);

// }
// int main() {
//      int arr[] = {3,6,2,1,8,7,4,5,3,1};
//      int n = 10;

//      BubbleSort(arr, 10);
// return 0;
// }






// // THROUGH METHOD TWO = SELECTION SORT;
// // TIME COMPLEXCITY = O(N^2) OR O(LOGN)
// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n){
     
//     cout << " MY SORTED ARRAY\n";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//         cout << endl;
// }
// void SelectionSort(int *arr, int n){

//     for(int i=0; i<n-1; i++){
//         int minidx = i;  // 5
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[minidx]){          // In Acending order. for dencending [<].
//                 swap(arr[j], arr[minidx]);
//             }
//         }
//      }

//     printarray(arr, n);

// }
// int main() {
//      int arr[] = {3,6,2,1,8,7,4,5,3,1};
//      int n = 10;

//      SelectionSort(arr, 10);
// return 0;
// }






// // THROUGH METHOD THREE = INSERTION SORT;
// // TIME COMPLEXCITY = O(N^2) OR O(LOGN)
// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n){
     
//     cout << "MY SORTED ARRAY\n";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//         cout << endl << endl;;
// }
// void Insertionsort(int *arr, int n){

//     for(int i=0; i<n; i++){
//         int curr = arr[i];  //4
//         int prev = i-1;
//          while (prev >=0 && arr[prev] > curr){       // This is In Acending order. for dencending [<]
//             swap(arr[prev], arr[prev+1]);
//             prev--;
//          } 
//             arr[prev+1] = curr;
//         }
//         printarray(arr, n);
//      }

//  int main() {

//     cout << endl;

//      int arr[] = {3,6,2,1,8,7,4,5,3,1};
//      int n = 10;

//      Insertionsort(arr, 10);
// return 0;
// }






// THROUGH METHOD FOURTH = COUNTING SORT;
// TIME COMPLEXCITY = O(N^2) OR O(LOGN)
// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n){
     
//     cout << "MY SORTED ARRAY\n";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//         cout << endl << endl;;
// }


// void countsort(int *arr, int n){
//      int freq[100000] = {0};
//      int minval = INT_MAX, maxval = INT_MIN;

//     for(int i=0; i<n; i++){  // for range.
//         minval = min(minval, arr[i]);
//         maxval = max(maxval, arr[i]);
//         }
           
//      // 1st step = O(n);   
//      for(int i=0; i<n; i++){
//         freq[arr[i]]++;
//      }

//       // 2st step = O(range);
//        for(int i = minval, j=0; i<=maxval; i++){
//        while(freq[i] > 0){
//         arr[j++] = i;
//         freq[i]--;
//        }
//        }
//          printarray(arr,n);

//      }

//  int main() {               

//     cout << endl;

//      int arr[] = {3,6,2,1,8,7,4,5,3,1};
//      int n = 10;

//      countsort(arr, 8);
// return 0;
// }




// INBUILT SORTING IN PROGRAMINING  :) BY DEFAULT THEY CAN SORT ARRAY IN ASSECDING ORDER;
#include <iostream>
using namespace std;

void print(int *arr, int n){
    cout << "MY SORTED ARRAY\n";

    for(int i=0; i<n; i++){
       cout << arr[i] << ", ";
    }
      cout << endl;
}

int main() {
     int arr[] = {3,6,2,1,8,7,4,5,3,1};
     int n =10;
     //sort(arr, arr+n);
     sort(arr, arr+n);  // sort array in parts(in given range) By Default in Acending Order.

    // For Sorting Array In Decending Order. 
    //  sort(arr+1, arr+5, greater<int>());  
     print(arr,n);

return 0;
}