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