#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double R( double );

int main()
{
   double x;
   double y;

   cout << fixed;

   for ( int loop = 1; loop <= 5; loop++ )
   {
      cout << "Enter a number: ";
      cin >> x;

      y = R( x );
      cout << setprecision( 6 ) << x << " rounded is "
         << setprecision( 1 ) << y << endl;
   }
}
