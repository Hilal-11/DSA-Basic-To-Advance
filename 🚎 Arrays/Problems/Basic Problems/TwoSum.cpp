#include<iostream>
#include<vector>
using namespace std;

// vector<int> TwoSum(vector<int> data , int target) {
//     vector<int> answer;

//     for(int i = 0; i < data.size(); i++) {
//        for(int j = i+1; j < data.size(); j++) {
//             if(data[i] + data[j] == target) {
//                 answer.push_back(i);
//                 answer.push_back(j);

//             }
//        }
//     }

//     return answer;
// }


int TwoSum(int data[] , int target) {
    int answer[2];
    for(int i = 0; i < 6; i++) {
        for(int j = i+1; j < 6; j++){
            if(data[i] + data[j] == target) {
                answer[0] = i;
                answer[1] = j;
            }
        }
    }

    return answer;
}
int main() {

    // std::vector<int> data(1 , 2 , 1 , 4);
    // int target = 6;

    // cout<<TwoSum(data , target)<<endl;

    int data[6] = {1 , 2 , 1 , 6 , 3  ,5};
    int target = 8;
    cout<<TwoSum(data , target);
    

    return 0;
}