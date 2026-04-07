#include <iostream>
using namespace std;

void watertrap(int *heights, int n){
    int maxleft[20000];
    maxleft[0] = heights[0];
    cout << "MAX LEFT VALUES :  " << maxleft[0] << " ";

    for(int i=1; i<n; i++){
        maxleft[i] = max(maxleft[i-1], heights[i-1]);
        cout << maxleft[i] << " ";
    }
        cout << endl;

    int maxright[20000];
        maxright[n-1] = heights[n-1];
        cout << "MAX RIGHT VALUES : ";
    for(int i=n-2; i>=0; i--){
        maxright[i] = max(maxright[i+1], heights[i+1]);
        cout << maxright[i] << " ";
    }
        cout << maxright[n-1] << " ";
        cout << endl;
         
        cout << "MINIMUM VALUES AFTER COMPARISION BOTH LEFT AND MAX VALUS ARRAY'S : " << " "; 
        
        int watertrapped = 0;
        for(int i=0; i<n; i++){
         int currwater = min(maxleft[i], maxright[i]) - heights[i];
            cout << currwater << " ";
         if(currwater > 0){
             watertrapped += currwater;
         }
        }
        cout << endl;
        cout << "MY CURRENT WATERTRAPED : " << watertrapped;

        cout << endl;

}
int main() {
     int heights[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
     int n = 12;

    watertrap(heights, n);
return 0;
}