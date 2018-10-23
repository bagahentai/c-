
#include <iostream>
using namespace std;

int main()
{
   int number1;
   int number = 1;
   int number3 = 0;

   cout << "Enter a 二进制 number: ";
   cin >> number1;

   while ( number1 != 0 )
   {
      number3 += number1 % 10 * number2;
      number1 /= 10;
      number2 *= 2;
   }

   cout << "十进制 is: " << number3 << endl;
}
