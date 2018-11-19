#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double hours = 0;
   double rate = 0;
   double salary = 0;
   cout << "Enter hours worked (-1 to end): ";
   cin >> hours;
   cout << setprecision( 2 ) << fixed ;

   while ( hours != -1 )
   {
      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> rate;

      if ( hours <= 40 )
         salary = hours * rate;
      else
         salary = 40.0 * rate + ( hours - 40.0 ) * rate * 1.5;

      cout << "Salary is $" << salary << endl;
      cout << "Enter hours worked (-1 to end): " << endl;

      cin >> hours;
   }
}
