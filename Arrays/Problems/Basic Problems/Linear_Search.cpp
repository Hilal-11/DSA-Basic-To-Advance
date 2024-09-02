#include<iostream>
using namespace std;

bool linearSearch(int data[] , int x) {
    bool flag = false;
    for (int i = 0; i < 7; i++){
        if (data[i] == x)
        {
            flag = true;
        }
    }
    return flag;
}


void linearSearch_b(int data[] , int x) {
    bool flag = false;
    for(int i = 0; i < 7; i++) {
        if (data[i] == x){
            flag = true;
            cout<<x<<" is present"<<endl;
            return;
        } 
    }
    cout<<x<<" is not present"<<endl;
    
}


int main() {

    int data[7] = {1 ,2 , 6 , 9 , 8 , 4 , 10};
    int x = 0;

    int result = linearSearch(data , x);
    if(result == 1){
        cout<<"True";
    }else{
        cout<<"False";
    }

    cout<<endl<<endl;

    linearSearch_b(data , x);














    return 0;
}