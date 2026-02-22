
//main program
int main() {
//Declaring the variables
int totalmarks;
int agnum;
string name;
float rep;
//showing output
cout<<"enter ur name\n";
cin>>name;
cout<<"Enter ur AGnum\n";
cin>>agnum;
cout<<"Enter ur total marks\n";
cin>>totalmarks;
//writing a formula for percentage
rep = (totalmarks /300.0)*100;
//conditioning
if (rep>=85.0) {
cout<<"Grade is A";
}
else if (rep >= 76) {
cout<<"Grade is B";
}
else if (rep>=60) {
cout<<"Grade is C";
}
else if (rep>=45) {
cout<<"Grade is D";
}
else {
cout<<"Grade is F";
}
return 0;
}


/*
Double selection:
1.if else
2.nested: if inside if
: its neccessary to put brackets.
: Indentation should be opted.
Multiple selection:
1. if else if


develpe a cal  - check value2 must be smaller than 1

*/



//
//#include<iostream>
//
//using namespace std;
//
//int main() {
// int val1;
// int val2;
// int sum,sub,
// cout <<"Enter first value: ";
// cin>>val1;
// cout <<"Enter 2nd value: ";
// cin>>val2;
// if (val>vak2)
// return 0;
//}
//
