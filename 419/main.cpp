#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int largest1 ;
    int largest2 ;
    int number1 = 0;
    int number2 = 0;
    cin >> number1;

    cin >> number2;
    if( number1 < number2 )
        {
            largest1 = number2;
            largest2 = number1;
        }
        else
        {
            largest1 = number1;
            largest2 = number2;
        }
    while( counter <= 7 )
    {
        counter = counter + 1;
        int number3 = 0;

        cin >> number3;

        if( number3 > largest1 )
        {
            largest2 = largest1;
            largest1 = number3;
        }
        else if( number3 > largest2 )
            largest2 = number3;

        cout << " The two largest numbers are  "<< largest1 <<" and " << largest2 << endl;
    }
}
