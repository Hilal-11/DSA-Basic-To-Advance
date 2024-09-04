#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n :- "<<endl;
    cin>>n;

    int numberOfStepsOfConjecture = 0;
    int ans = n;
    while(ans != 1) {
        if(ans % 2 == 0) {
            cout<<ans<<" / 2 = ";
            ans = (ans/2);
            cout<<ans<<"\t";
        }
        else if(ans % 2 != 0) {
            cout<<"3("<<ans<<")+1 = ";
            ans = (3 * ans) + 1;
            cout<<ans<<"\t";

        }
        numberOfStepsOfConjecture++;
    }
    cout<<endl<<endl;
    cout<<ans<<endl;
    cout<<"Number of steps to solve the conjecture of value "<<n<<" = "<<numberOfStepsOfConjecture<<endl;
    cout<<endl<<endl;



    return 0;
}