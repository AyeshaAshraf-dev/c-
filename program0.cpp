#include<iostream>
#include<string>

using namespace std;

/*"Ask user to enter age,gender(M\F) and income.Check whether he/she is eligible to get loan or not."*/
int main() {
    string name;
    int age, income;
    float per;
    cout<<"Enter username\n";
    cin>>name;
    cout<<"Enter age\n";
    cin>>age;
    cout<<"Enter income\n";
    cin>>income;
    per = (income/200000.0)*100;
    if (income>200000.0){
        cout<<"You are clearly not eligible according to our policies!"<<endl;
    }
    else if (per > 40.0){
        cout<<"Yes! You are eligible for loan"<< per << "%"  <<endl;
    }
    else {
        cout<<"Sorry! you are not eligible"<<endl;
    }
    return 0;

}
