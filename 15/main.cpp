
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double number1 = 0;
   double number2 = 0;

   cout << "Enter sales in dollars (-1 to end): ";
   cin >> number1;

   cout << number1 + number2 << setprecision( 2 );

   while ( number1 != -1.0 )
   {
      number2 = 200.0 + 0.09 * number1;
      cout << "Salary is: $" << number2;

      cout << "\n\nEnter sales in dollars (-1 to end): ";
      cin >> number1;
   }
}

