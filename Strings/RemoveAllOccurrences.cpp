#include<iostream>
using namespace std;

string RemoveAllOccurrences(string str , char ch) {
    int length = str.length();
    string answer = "";

    for(int i = 0; i < length; i++) {
        if(str[i] != ch) {
            answer += str[i];
        }
    }
    return answer;
}
int main() {
    string str = "axpleaxa";    //xplex
    char ch = 'a';
    cout<<RemoveAllOccurrences(str , ch);
    return 0;
}