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
    cout<<"Enter a value">>;
    cin>>value;
    if (value/2 == 0) {
    cout<<"value is even!"
    }
    else {
    cout<<"value is odd!"
    }
    return 0;

}*/
/*
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



#include<iostream>
using namespace std;
int sum(int num1,int num2) {
    return num1+num2;

}
int main() {
    int x = 23;
    int y = 34;
    int resultt = sum(x,y);

    cout<<"the sum of numbers is "<<resultt<<endl;
   return 0;
}




//2. Write a function to check whether a number is even or odd.

#include<iostream>
using namespace std;

int evenoddnum(int num) {
    if (num%2==0) {
        cout<<"num is even"<<endl;
    }
    else  {
        cout<<"num is odd"<<endl;

    }
    return 0;
}

int main(){
    int x = 33;
    int result = evenoddnum(x);
    cout<<result;
    return 0;
}
*

//Write a function to find the maximum of three numbers.

#include<iostream>

using namespace std;

int maxnum(int num11,int num22,int num33){
       // int num11,num22,num33;
        if(num11>=num22 && num11>=num33) {
        cout<<num11<<" is greater than other!(1st number)"<<endl;
        return num11;
        }
        else if(num22>=num11 && num22>=num33) {
        cout<<num22<<" is greater than other!(2nd number)"<<endl;
        return num22;
        }
        else {
        cout<<num33<<" is greater than other!(3rd number)"<<endl;
        return num33;
        }

}

int main() {
    int x, y, z;
    cout << "Enter three numbers: " << endl;
    cin >> x >> y >> z;

    // Fix 3: Declared the 'results' variable type and used the user inputs (x, y, z)
    int results = maxnum(x, y, z);

    cout << "The maximum num is: " << results << endl;

    return 0;
}


//Write a function to calculate the factorial of a number using function.




#include<iostream>

using namespace std;

int getfact(int n) {
    long long fact = 1;
    for(int i=1;i<=n;++i) {
        fact = fact*i;
    }
    return fact;
}


int main() {
    int n;
    cout<<"Enter the number u want to get factorial of :"<<endl;
    cin>>n;
    long long result3 = getfact(n);
    cout<<"The factorial is: "<<result3<<endl;
}



//. Write a function to print the multiplication table of a given number.

#include<iostream>

using namespace std;

void mulnum(int n){
    int i;
    for( i=1 ; i<=10 ; i++ ){
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }

}

int main(){
    int x;
    cout<<"Enter the Number u want to get table of: "<<endl;
    cin>>x;
    cout<<"The table is: "<<endl<< x <<endl;
    mulnum(x);


}


//Write a function to check whether a number is prime.

#include<iostream>
#include<math.h>

using namespace std;

int isprime(int n) {
    if (n<=1) {
        return 0;
    }
    for(int i=2;i<=std::sqrt(n);++i) {
    if(n%i==0) {
    return 0;
    }
    return true;
 }
}

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(isprime(num)) {
    cout<<num<<" is prime number."<<endl;
    }
    else {
    cout<<"not a prime number sorry!!";
    }
    return 0;

}

//Write a function to calculate power (x ^ y) using loops.
#include<iostream>
using namespace std;

long long calpower(int x, int y){
    int result = 1;
    for(int i=1;i<=y;i++) {
    result = result*x;

    }
    return result;
}

int main(){
    int num1,num2;
    cout<<"Enter x: "<<endl;
    cin>>num1;
    cout<<"Enter y: "<<endl;
    cin>>num2;
    if(num1==0) {
    cout<<"The result : 0";
    }
    else if(num2==0) {
    cout<<"The result : 1";
    }
    else  {
    cout<<"THE RESULT: "<<calpower(num1,num2)<<endl;
    }
    return 0;

}




//8. Write a function to reverse a number.



#include<iostream>

using namespace std;


int reversenum(int n) {
    int reminder, revnum = 0;
    while(n>0) {
    reminder = n%10;
    n = n/10;
    revnum = (revnum*10) + reminder;
    }
    return revnum;

}



int main(){
    int x;
    cout<<"Enter a num: "<<endl;
    cin>>x;
    int result = reversenum(x);
    cout<<"The reverse number is: "<<result<<endl;
    return 0;

}





//Write a function to check whether a number is palindrome.

#include<iostream>

using namespace std;


bool reversenum(int n) {
    int orignalnum = n;
    int reminder, revnum = 0;
    while(n>0) {
    reminder = n%10;
    n = n/10;
    revnum = (revnum*10) + reminder;
    }
    return (revnum==orignalnum);

}



int main(){
    int x;
    cout<<"Enter a num: "<<endl;
    cin>>x;
    if (reversenum(x)) {
    cout<<"It is a paindrome!"<<endl;
    }
    else {
    cout<<"It is not a palindrome!"<<endl;
    }
    return 0;

}

*/

//10.Write a function to find sum of digits of a number.

#include<iostream>

using namespace std;


int sumfun(int n) {
    int sum = 0;

    while(n>0) {
    int lastdigit = n%10;
    sum = sum + lastdigit;
    n = n/10;
    }
    return sum;
//s 
}
int main() {
    int a;
    cout<<"Enter the number! "<<endl;
    cin>>a;
    cout<<"THe Sum IS: "<<sumfun(a)<<endl;
    return 0;

}






























