#include<iostream>
using namespace std;

int sum(int x, int y);
int mul(int x, int y);
int sub(int x, int y);
float divide(int x, int y);

int main() {
    int a, b, value;
    
    cout << "Enter first num: ";
    cin >> a;
    cout << "Enter 2nd num: ";
    cin >> b;
    
    cout << "\n1: Addition\n2: Subtraction\n3: Division\n4: Multiplication\nSelection: ";
    cin >> value;

    if (value == 1) cout << "Result: " << sum(a, b) << endl;
    
    else if (value == 2) {
        if (b > a) cout << "Subtraction would result in a negative number." << endl;
        else cout << "Result: " << sub(a, b) << endl;
    }
    
    else if (value == 3) {
        if (b == 0) cout << "Error: Cannot divide by zero!" << endl;
        else cout << "Result: " << divide(a, b) << endl;
    }
    
    else if (value == 4) {
        cout << "Result: " << mul(a, b) << endl;
    }
    else cout << "Invalid selection." << endl;

    return 0;
}

// Function Definitions
int sum(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
float divide(int x, int y) { return (float)x / y; }