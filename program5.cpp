#include<iostream>

using namespace std;
/*
In a company, there are deductions from the salary of the employees for a fund.
The deduction rules are as follows:","_If salary is less than Rs.10,000 then no deduction
_If salary is equal to or more than Rs.10,000 and less than RS.","20,000 then deduct Rs.1,000
as fund_If salary is equal to or more than 20,000 then deduct 7% of the salary for fund.",“
Input salary and name from user and after appropriate deduction show the net payable amount like
this:, Helloname!Your net payable amount is 12000.
*/

int main() {
    int salary;
    string name;
    int formula;
    cout<<"Enter your salary: \n";
    cin>>salary;
    cout<<"Enter your name: \n";
    cin>>name;
    if (salary < 10000) {
        cout<<"No Deduction! Your salary is already Basic/nSalary is [salary] ";
    }
    else if (salary=>10000 && salary=<20000) {
        salary = salary-1000;
        cout<<"Hello [name]! Your net payable amount is [salary]";
}
    else if (salary>20000) {
        salary = salary*0.07;
        cout<<"Hello [name]! Your net payable amount is [salary]";
    }
    else {
        cout<<"Information is Invalid! "
    }

}
