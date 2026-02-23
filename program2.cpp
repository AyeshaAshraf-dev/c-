/*AsK user to enter two number
then ask to enter operater(+,- /,*)
cal the reusult
display the result*/
#include<iostream>

using namespace std;
int sum(int a,int b);
int sub(int a,int b);
float divide(int a,int b);
int mul(int a,int b);


int main() {
int num1,num2;
int choice;
cout<<"Enter 1st digit\n";
cin>>num1;
cout<<"Enter 2nd digit\n";
cin>>num2;
cout<<"Select the operator!\n";
cout<<"1. Addition\n";
cout<<"2. subtraction\n";
cout<<"3. division\n";
cout<<"4. multiplication\n";
cin>>choice;

if (choice==1) {
    cout<<"Result: " <<sum(num1, num2);
}
else if (choice==2){
    cout<<"Result: "<<sub(num1, num2);
}
else if (choice==3){
    cout<<"Result: " <<divide(num1, num2);
}
else if (choice==4){
    cout<<"Result: "<<mul(num1, num2);
}
else {
    cout<<"invalid input!... ";
    return 0;
}

}

int sum(int a, int b) {
    return a+b;
}
int mul(int a, int b) {
    return a*b;
}
float divide(int a, int b) {
    if (a==0 || b==0){
        cout<<"Division not possible!";
        return 0;
    }
    return (float)a/b;

}
int sub(int a, int b) {
    if (b>a){
    cout<<"subtraction not possible";
    return 0;
    }
    else {
        return a-b;
    }
}

