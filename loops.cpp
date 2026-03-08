/*multiplication table*/

#include<iostream>

using namespace std;

int main() {
    int num, MulNum;
    cout<<"Enter number: "<<endl;
    cin>>num;
    cout<<"Enter end number: "<<endl;
    cin>>MulNum;
    for (int i=1;i<=MulNum;++i) {
        cout<<num <<"*"<<i<<"="<<num*i <<endl;
    }

    return 0;


}



