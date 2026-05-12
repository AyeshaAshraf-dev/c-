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

*/

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






































