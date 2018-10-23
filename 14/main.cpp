#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double number1 = 0;
double number2 = 0;
double number3 = 0;
double number4 = 0;
double number5 = 0;
double number6 =0;

    cout << " Enter account number(or-1 to quit ): " << endl;
    cin >> number1;
    while( number1 != -1 )
    {
    cout << " Enter beginning balance: " << endl;
    cin >> number2;
    cout << " Enter total charges: " << endl;
    cin >> number3;
    cout << " Enter total credits: " << endl;
    cin >> number4;
    cout << " Enter credit limit: " << endl;
    cin >> number5;
     number6 = number2 + number3 - number4;
 if ( number6  > number5 )
   {
    cout << " New balance is " << number6 << endl;
    cout << " Account:       " << number1 << endl;
    cout << " Credit limit: " << number5 << endl;
    cout << " Balance:       " << number6 << endl;
    cout << "Credit Limit Exceeded " << endl;
    }
 else
    cout << " New balance is " << number6 << endl;
    cin >> number1;
    }
}
