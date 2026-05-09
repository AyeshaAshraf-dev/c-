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
*/
#include<iostream>

using namespace std;

int main()  {
    int value;
    cout<<"Enter a value">>;
    cin>>value;
    if (value/2 == 0) {
    cout<<"value is even!"
    }
    else {
    cout<<"value is odd!"
    }
    return 0;

}
