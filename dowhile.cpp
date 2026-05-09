/*calculate sum from 1 to 100 by do while
#include<iostream>

using namespace std;

int main() {
    int sum = 0;
    int n = 1;
    do {
        sum+=n;
        cout<<n<<endl;
        if (n<100) {
            cout<<"+";
        }
        n++;

    }
    while(n<=100);

    cout<<"The sum of numbers from (1 to 100): "<< sum;
    return 0;

}

//calculate the sum of even and odd from 1 to 100


#include<iostream>

using namespace std;

int main() {
    int evensum = 0;
    int oddsum = 0;
    int n = 1;

    cout<<"Calculating sum from 1 to 100"<<endl;
do  {
    if (n%2 == 0) {
        evensum += n;
    }
    if (n%2 != 0) {
       oddsum += n;
 }
    n++;
} while(n<=100);

    cout<<"The sum of even num: "<<evensum<<endl;
    cout<<"The sum of odd num: "<<oddsum<<endl;
    cout<<"The sum of total numbers: "<<oddsum + evensum<<endl;


}

*/


//write table by user given value by do while
#include<iostream>
using namespace std;

int main() {
    int num;
    int tabl;
    int i;

    cout<<"-------Multiplication table------"<<endl;
    cout<<"Enter the number you want to have a multiplication table: "<<endl;
    cin>>tabl;
    cout<<"Enter the end number: "<<endl;
    cin>>num;

    do {
        cout<<tabl<<"x"<<i<<"="<<(i*tabl)<<endl;
        i++;
    }   while(i<=num);
    return 0;
}




















