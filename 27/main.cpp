
#include <iostream>
using namespace std;

int main()
{
   int number1;
   int number2 = 1;
   int number3 = 0;

   cout << "Enter a erjinzhi number: ";
   cin >> number1;

   while ( number1 != 0 )
   {
      number3 += number1 % 10 * number2;
      number1 /= 10;
      number2 *= 2;
   }

   cout << "shijinzhi is: " << number3 << endl;
}
