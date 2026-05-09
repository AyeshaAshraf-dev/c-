/*multiplication table

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

*/


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

