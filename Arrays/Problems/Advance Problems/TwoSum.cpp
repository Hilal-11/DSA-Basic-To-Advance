#include<iostream>
#include<vector>
using namespace std;

// vector<int> TwoSum(vector<int> &vec , int target) {

//     for(int i = 0; i < vec.size(); i++) {
//         for(int j = i+1; j < vec.size(); j++) {
//             if(vec[i] + vec[j] == target) {
//                 return { i , j };
//             }
//         }   
//     }

//     return {};
// }
int main() {
    // vector<int> vec(7);

    // vec.push_back(2);
    // vec.push_back(5);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(7);
    // vec.push_back(8);
    // vec.push_back(3);

    // int target = 10;
    
    //  for(int i = 0; i < vec.size(); i++) {
    //     for(int j = i+1; j < vec.size(); j++) {
    //         if(vec[i] + vec[j] == target) {
    //             cout<<vec[i];
    //         }
    //     }   
    // }




    int arr[6] = {2 , 5 , 1 , 2 , 7 , 8};
    int size = 6;
    int target = 7;

    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                cout<<i , " " , j;
            }
        }   
    }






    return 0;
}