#include<iostream>
#include<stack>
using namespace std;

int main() {
    string name = "Hilal";
    
    stack<char> s;

    for(int i = 0; i < name.size(); i++) {
        char ch = name[i];
        s.push(ch);
    }

    string answer = "";

    while (!s.empty()){
        char ch = s.top();
        answer.push_back(ch);
        s.pop();

    }

    cout<<"Reverse = "<<answer<<endl;
    

    return 0;
}