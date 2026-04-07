// #include <iostream>
// using namespace std;

// int main() {
//     int nums[3][3]= {
//                    {1,4,9},
//                    {11,4,3},
//                    {2,2,3},
//                  };
                 
//                  int sum = 0;

//                  for(int i=0; i<3; i++){
//                     for(int j=0; j<3; j++){
//                         if(nums[i][j] == nums[1][0]){
//                             sum += nums[i][j];
//                         }else if(nums[i][j] == nums[1][1]){
//                             sum += nums[i][j];
//                         }else if(nums[i][j] == nums[1][2]){
//                             sum += nums[i][j];
//                         }else{
//                            continue;
//                         }
//                  }
//                         cout << endl;
//                 }
//                         cout << "Sum of 2ND row : " << sum << endl;

// return 0;
// }


//2.
// #include <iostream>
// using namespace std;

// int main() {

//     int nums[3][3]= {
//         {1,4,9},
//         {11,4,3},
//         {2,2,3},
//     };

//     int sum = 0;

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){

//             if(i == 1){        // 2nd row ka check
//                 sum += nums[i][j];
//             }

//         }
//         cout << endl;
//     }

//     cout << "Sum of 2ND row : " << sum << endl;

//     return 0;
// }


// 3.
#include <iostream>
using namespace std;

int main() {

    int nums[3][3] = {
        {1,4,9},
        {11,4,3},
        {2,2,3}
    };

    int sum = 0;

    for(int j = 0; j < 3; j++){
        sum += nums[1][j];   // 2nd row (index 1)
    }

    cout << "Sum of 2nd row : " << sum << endl;

    return 0;
}