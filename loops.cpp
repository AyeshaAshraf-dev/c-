
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
int main1() {
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

int main2(){
    int x = 33;
    int result = evenoddnum(x);
    cout<<result;
    return 0;
}


//Write a function to find the maximum of three numbers.


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


int main3() {
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
    for( i=1 ; i<=n ; i++ ){
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }

}

int main4(){
    int x;
    cout<<"Enter the Number u want to get table of: "<<endl;
    cin>>x;
    cout<<"The table is: "<<endl<< x <<endl;
    mulnum(x);


}























