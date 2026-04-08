#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int ei, int mid){
    vector <int> vec;
     int i = si;  
     int j = mid+1;

     while(i <= mid && j <= ei){
        if (arr[i] < arr[j])
        {
           vec.push_back(arr[i++]);
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
               arr[idx] = vec[x++];    
        }
}
void mergesort(int arr[], int si, int ei){
    if(si >= ei){
         return;
    }
     int mid = si + (ei-si) / 2;    
    mergesort(arr, si, mid);        
    mergesort(arr, mid+1, ei);       

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
