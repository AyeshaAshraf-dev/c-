#include<iostream>
using namespace std;

  int sum(int x,int y);
  int mul(int x,int y);
  int sub(int x,int y);
  float divide(int x,int y);

int main()
{
    int a,b;
    int value;
    cout << "Enter first num: \n";
    cin >> a;
    cout << "Enter 2nd num: \n";
    cin >> b;
    cout << "1: addition \n";
    cout << "2: subtraction \n";
    cout << "3: division " << endl
    ;
    cout << "4: multiplication" << endl;
    cin >> value;

    if (value==1) {
        cout << "Result: " <<sum(a,b), endl;
    }
    if (value==2) {
        if (b>a){
            cout<<"Subtraction not possible";
            return 0;
     }
     }
        cout << "Result: " <<sub(a,b), endl;
    }
    if (value==3) {
        cout << "Result: " <<divide(a,b) endl;
    }
    if (value==1) {
        cout << "Result: " <<mul(a,b) endl;
    }
    return 0;
}

int sum(int x,int y) {
    return x+y;
}
int sub(int x, int y) {
    return x-y;
}
int mul(int x, int y) {
    return x*y;
}
float divide(int x, int y) {
    return x/y;
}
