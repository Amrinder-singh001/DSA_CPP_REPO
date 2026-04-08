//NEW CHAPTER 
//RECURSION
// When a function reperadely call itself again and again until the base condition is not reached and those types of functions are called (recursive function)
// Base condition has must-must very important in any recursive functions 
// because that is the only way to stop the recursive function.  

// 1. very simple example of rucursive function is here . This example of recursion function is very bad because they call itself again and agian because they had no any base condition to stop that function and it takes full memory space and may be your mac/laptop can be hanged.
// #include <iostream>
// using namespace std;

// void func(){
//     cout << "Fuction call itself" << endl;
//     func();
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//      func();
    
//     return 0;
// }



// 2. FACTORIAL OF N
// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0 || n == 1){
//      return 1;
//     }else{
//      return n * factorial(n - 1);     // Recursive call :) it call's itself repeatdely again and again until the base condition is not reached.
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
     
//     int n = 10;
//     cout << "Factorial of " << n << " is : " << factorial(n) << endl;
    
//     return 0;
// }


// 3. RECURSIVE FUNCTION FOR PRINT NUMBERS IN DECREASING ORDER
// #include <iostream>
// using namespace std;

// int decrese(int n){
//     if(n == 1){
//        return 1;
//     }else{
//        cout << n << " ";  // yeh mera kam hai ki muhje kya kaam perfom karvana hai 
//        return decrese(n-1);  // yeh btayega ki har ek recursive call mei konsi value call hogi 

//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//       int n = 5;
//         cout << decrese(n) << " ";
//     return 0;
// }



// RECURSIVE FUNCTION FOR PRINT NUMBERS IN INCREASING ORDER
// #include <iostream>
// using namespace std;

// void decrese(int n){
//     if(n == 1){
//        return;
//     }else{
//         decrese(n-1);  // yeh btayega ki har ek recursive call mei konsi value call hogi 
//         cout << n << " ";  // yeh mera kam hai ki muhje kya kaam perfom karvana hai. 
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//       int n = 100;
//       decrese(n);

//     return 0;
// }


// SUM OF N NATURAL NUMBERS USING RECURSION
// #include <iostream>
// using namespace std;

// int sum(int n){
    
//     if(n == 1){
//         return 1;
//     }
//      return n + sum(n-1);

// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//       int n = 100;

//     cout << "Sum of first " << n <<  " natural number is : " << sum(n) << endl;
//     return 0;
// }


// NTH FIBBONACHI CODE USING RECURSION
// #include <iostream>
// using namespace std;

// int Febbonachi(int n){
//       if(n == 0 || n == 1){
//         return n;   
//       }

//       return Febbonachi(n-1) + Febbonachi(n-2);
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//        int n; 
//        cout << "Enter number for genrate fevonacchi series : ";
//        cin >> n;

//        cout << "Sum of first " << n <<  " Febbonachi series is : " << Febbonachi(n) << endl;
    
//     return 0;
// }


// // FOR FINDING ELEMENT IN FIRST OCCURENCE USING RECURSION

// #include <iostream>
// #include <vector>
// using namespace std;

// int firstoccur(vector<int> arr, int i, int target){
//     if(i == arr.size()){
//         return -1;
//     }

//     if(arr[i] == target){
//         return i;
//     }

//     return firstoccur(arr, i+1, target);
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//        vector <int> arr = {1,2,3,3,4,5};

//          cout << "First occurence at : " << firstoccur(arr, 0, 3) << endl;
//     return 0;
// } 




// // FOR FINDING ELEMENT IN LAST OCCURENCE USING RECURSION

// #include <iostream>
// #include <vector>
// using namespace std;

// int Lastoccur(vector<int> arr, int i, int target){
//     if(i == arr.size()){
//         return -1;
//     }

//     int idxFound = Lastoccur(arr, i+1, target); //bar bar call krega i(khud ko nahi) sirf ith (apne index ko chod ke) baki dusre index ke liye check krega agr dusre saare index ko check krne ke baad bi element na mila toh (-1) return hoga . toh ab ham check krenge if idxfound ki value -1 ke braber hai or (arr[i] == target) hai toh hi ham apne ith index ke liye check krenge 

//     if(idxFound == -1 && arr[i] == target){
//         return i;
//     }
    
//     return idxFound;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//        vector <int> arr = {1,2,3,3,3,4,5,5};

//          cout << "Last occurence at : " << Lastoccur(arr, 0, 5) << endl;
//     return 0;
// } 


//CHCK IF ARRAY IS SORTED OR NOT USING RECURSION.
// #include <iostream>
// using namespace std;

// int issorted(int arr[], int n, int i){
//     // base case
//     if(i == n-1){     // traverse karke mei apne array ke last index pe hu iska mtlb mera array sorted hai aur mujhe true return karna hai
//         return true;
//     }

//     if(arr[i] > arr[i+1]){    //agar array ke andar ((ith) i) index ki value badi ho jati hai (i+1) index se iska matlab mera array unsorted hain Because hame pta hai ki ek sorted aray mei kabhi b ith index hamare i+1 index se kbi bada nhi hota. agar ye condition galat sabit huyi to ham 
//         return false;   // false return kar denge 
//     }

//     return issorted(arr, n, i+1);     
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//        int arr1[] = {1,2,3,4,5};   //array is sorted : 1
//        int arr2[] = {1,2,3,4,5};   //array is unsorted : 0
    
//     cout << "Array is sorted or not(if 1 then it sorted or it can be 0 otherwise it is unsorted) : " << issorted(arr1, 5, 0) << endl;;

//     cout << "Array is sorted or not(if 1 then it sorted or it can be 0 otherwise it is unsorted) : " << issorted(arr2, 5, 0) << endl;
//     return 0;
// }  

// PRINT X TO THE POWER N``````` [X^N]
// #include <iostream>
// using namespace std;

// int powerxton(int x, int n){
//      if(n == 0){
//         return 1;
//      }

//       int halfpow = powerxton(x, n/2);
//       int sqrhalfpow = halfpow * halfpow;

//       if(n % 2 != 0){
//         return x * halfpow * halfpow;
//       }
          
//      return sqrhalfpow;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//         cout << powerxton(2, 5) << endl;
//     return 0;
// }


 //COUNT TOTAL WAYS TO A TILE A FLOOR 2XN WITH TILES 2X1;
// #include <iostream>
// using namespace std;

// int tilingproblem(int n){
//      if(n == 0 || n == 1){
//       return 1;
//      }
    //  int ans1 = tilingproblem(n-1); // tiles place in verticaly
    //  int ans2 = tilingproblem(n-2); // tiles place in Horizontly

//      return tilingproblem(n-1) + tilingproblem(n-2);
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//       int n = 10;
//      cout << "we can place our tiles(2 x 1) for (2 x " << n << ")" << " Floar size " << "in total ways = " << tilingproblem(n) << endl; // n = 5
//     return 0;
// } 



// REMOVE DUPLICATES FROM STRING USING RECURSION
// #include <iostream>
// using namespace std;

// void remdup(string str, string ans, int i, int arr[]){
//   if(i == str.size()){   // agar i(index no) ki value string ka size ke braber ho jaye to hame recursion kok dena hai kyuki koi cahrcter hi hoga check karne ke liye. we can also say(i == n). where n = size of string
//     cout << ans << endl;
//     return;
//   }
//    char ch = str[i];
//    int arridx = (int)(ch - 'a'); // this will(arridx) gave array index no 
//     if(arr[arridx] == true){
//       remdup(str, ans, i+1, arr);

//     }else{
//       arr[arridx] = true;
//        remdup(str, ans+str[i], i+1, arr);
//     }

// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//      string str = "apollge";
//      int arr[26] = {false};
//      string ans = ""; 
//      remdup(str, ans, 0, arr);
    
//     return 0;
// }



// FRIENDS PAIRING PROBLEM SOLVE USING RECURSION
// #include <iostream>
// using namespace std;

// long freindproblem(long n){
//      if(n == 1 || n == 2){
//         return n;
//      }

//      // for single choice
//      long ans1 = freindproblem(n-1);   // Agar ham single(choise) rehna pasand karenge toh (n-1) freinds ke liye problem ko solve karna hain. har ek recursive call mei
      
//      // for pairing choice
//      long ans2 = (n-1)*freindproblem(n-2); // Agar ham paring(choise) rehna pasand karenge toh (n-2) freinds ke liye problem ko solve karna hain har ek recursive call mei 

//      return ans1+ans2;

// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     long n = 15;
//       cout << "If we have " << n << " friends then total ways1(vo kaise arrange ho skte hain) single + pairing : " << freindproblem(n) << endl;
//     return 0;
// }



// BINARY STRING PROBLEM
// PRINT ALL BINARY STRING OF SIZE N WITHOUT ANY CONSECUTIVE 1'S
// #include <iostream>
// using namespace std;

// with lastplace variable
// void stringproblem(int n, int lastplace, string ans){
//      if(n == 0){
//       cout << ans << endl;
//       return;
//      }

//      if(lastplace != 1){
//       stringproblem(n-1, 0, ans + '0');
//       stringproblem(n-1, 1, ans + '1');
//      }else{
//       stringproblem(n-1, 0, ans + '0');
//      }

// }
 
   // without lastplace variable
//     void stringproblem(int n , string ans){
//     if(n == 0){
//       cout << ans << endl;
//       return;
//      }

//      if(ans[ans.size()-1] != '1'){
//       stringproblem(n-1, ans + '0');
//       stringproblem(n-1, ans + '1');
//      }else{
//       stringproblem(n-1, ans + '0');
//      }
//    }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
      
//       string ans = "";
//       stringproblem(5 , ans);
    
//     return 0;
// }

// Code For Merge sort using divide and conquer.
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int ei, int mid){
    vector <int> vec;
     int i = si;   // left part , i start hoga (si) se 
     int j = mid+1;// right part, j bi start hoga (si) se but right part ke (si) se.

     while(i <= mid && j <= ei){
        if (arr[i] < arr[j])
        {
           vec.push_back(arr[i++]);    
          // hame array ke sabhi element ko add karna hai vector array(vec) mei. isiliye ham arr[i] ko add karne ke baad update bi karna hai aise. arr[i++] ya i++. agar i++ then usko alag se karna padega.        
        }else
        {
              vec.push_back(arr[j++]);
        }
     }

     while(i <= mid){
        vec.push_back(arr[i++]);
    }

     while(j <= ei){
        vec.push_back(arr[j++]);
     }


        for(int idx = si, x = 0; idx <= ei; idx++){   
               arr[idx] = vec[x++];    // move vector array to orignal array. 
        }
}
void mergesort(int arr[], int si, int ei){
    if(si >= ei){
         return;
    }
     int mid = si + (ei-si) / 2;    // gives the mid of array
    mergesort(arr, si, mid);         // for left part of array    
    mergesort(arr, mid+1, ei);       // for right part of array

    merge(arr, si, ei, mid);
}
 void printarr(int arr[], int n){
          cout << "Sorted array" << endl;
          cout << "------------" << endl;
          for(int i=0; i<n; i++){
            cout << arr[i] << " ";
          }
           cout << endl;
      }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int arr[] = {6,3,7,5,2,4};
     int n = 6;

     mergesort(arr, 0, n-1);
     printarr(arr, n);

    return 0;
}