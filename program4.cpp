/*Write a program that takes grade as an input from the user and depending upon the grade display the message.,Following is the criteria:_if grade is ‘A’then display”Excellent”_if grade is ‘B’then display”Very Good”_if grade is ‘C’,then display”Good”_if grade is ‘D’ then display”Poor”_if grade is ‘F’ then display”Fail”.*/

#include<iostream>

using namespace std;

int main(){
        char a;
        cout<<"Enter Grade: \n";
        cin>>a;
        if (a== 'A' || a=='a') {
        cout<<"Excellent";
        }
        else if (a=='B' || a=='b') {
        cout<<"Very Good";
        }
        else if (a=='C' || a=='c') {
        cout<<"Good";
        }
        else if (a=='D' || a=='d') {
        cout<<"Poor";
        }
        else if (a=='F' || a=='f') {
        cout<<"Fail";
        }
        else  {
        cout<<"Invalid Input";
        }


}
