/*#include<iostream>

using namespace std;
//Ask user to enter a three digit number and
//then display the number in reverse order
int main()   {
    int number;
    cout<<"Enter a three digit number!";
    cin>>number;
    cout<<number%10;
    number = number/10;
    cout<<number%10;
    number = number/10;
    cout<<number%10;



}*
Prompt user to enter a value. Check if the
number is even then display a message that
number is even. If number if odd then display
message number is odd

#include<iostream>

using namespace std;

int main()  {
    int value;
    cout<<"Enter a value";
    cin>>value;
    if (value%2 == 0) {
    cout<<"value is even!";
    }
    else {
    cout<<"value is odd!";
    }
    return 0;

}



Develop a calculator which is able to handle
two numbers. The calculator can perform
addition, subtraction, multiplication, and
division.Develop a calculator which is able to handle
two numbers. The calculator can perform
addition, subtraction, multiplication, and
division.
#include<iostream>

using namespace std;

int main() {
    int choice;
    int num1,num2;
    int sum,sub,div,mul;
    cout<<"Enter Two numbers ! (make sure to add a space btw them)";
    cin>>num1>>num2;
    cout<<"What operation do u want?\n 1 for addition\n 2 for subtraction\n 3 for dividing\n 4 for multiply\n";
    cin>>choice;

    if(choice == 1) {
        sum = num1+ num2;
        cout<<"The additionn of "<<num1<<" and "<<num2<<" is "<<sum;

    }
    else if(choice == 2) {
        sub = num1- num2;
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<sub;
    }
    else if(choice == 3) {
        div = num1/num2;
        cout<<"The division of "<<num1<<" and "<<num2<<" is "<<div;
    }
    else if(choice == 4) {
        mul = num1*num2;
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<mul;
    }
    else {
        cout<<"Something is wrong! check the code again!";
    }

    return 0;

}

#include<iostream>

using namespace std;
int main() {
int num;
cout<<"Enter a num!";
cin>>num;
float douv = num*2;
cout<<"The double of num is: "<<douv;

}

//8ax2 + 6bx + 4c
#include<iostream>
using namespace std;
int main() {
 int a, b,c,x;
 cout<<"Enter the value of a,b ,c,x \n";
 cin>>a>>b>>c>>x;

 float answer = 8*a*(x*x)+6*b*x+4*c;

 cout<<answer;

}
11. Write a program that takes principal amount, rate of interest, and time from the user and calculates
the simple interest using the formula:
SI =
P × R × T
100
The program should display the calculated simple interest.

#include<iostream>

using namespace std;

int main() {
    float P,R,T,SI;

    cout<<"Enter the value of principal amount, rate of interest, and time!";
    cin>>P>>R>>T;

    SI = (P*R*T)/100;

    cout<<"The ans is "<<SI;

}
14.Write a program that asks the user to enter the price of an item. The program should calculate
the total bill amount after adding 10% tax. Display the final bill amount including tax.

Total = Price + (Price × 0.10)

#include<iostream>

using namespace std;
int main() {
    int price;
    float total_bill;

    cout<<"Enter the price of the item!";
    cin>>price;

    total_bill = price + (price*0.10);

    cout<<total_bill;

}
Write a program that inputs two numbers and displays which number is greater or displays
"Both numbers are equal" if they are the same.

#include<iostream>

using namespace std;
int main() {
    int number1, number2;
    cout<<"Enter two numbers!";
    cin>>number1>>number2;

    if (number1>number2){
        cout<<"\nThe " <<number1<< " is greater than " <<number2;
    }o
    else if (number2>number1){
        cout<<"\nThe " <<number2<< " is greater than " <<number1;
    }
    else if (number1==number2){
        cout<<"\nboth are equal";
    }
    else {
        cout<<"\ncheck ur code again";
    }

}
Q#9: Write a program that takes a student’s marks as input and displays
"Pass" if marks are
greater than or equal to 50, otherwise display "Fail" (use ternary o.


#include<iostream>

using namespace std;

int main() {
    int mark;
    cout<<"enter marks!\n";
    cin>>mark;

    string result = (mark>=50)? "pass":"Fail";
    cout<<result;
    return 0;

}*/
Print the table of user given number from 1 upto user given limit. Like if user enters 3, and limit
is 4, program should print table of 3 as follows:

3 * 1 = 03
3 * 2 = 06
3 * 3 = 09
3 * 4 = 12

#include<iostream>

using namespace std;

int main() {
    int num, i;
    cout<<"Enter a Number u want to get table of! \n";
    cin>>num;
    for(i=1;i<=10;++i)
    cout<<num<< " * " << i << " = " << num*i << "\n";
     return 0;


}

















