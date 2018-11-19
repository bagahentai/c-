#include <iostream>
using namespace std;

int main()
{
   int a = 1;
   int b;

   cout << "Enter a positive Integer: " << endl;
   cin >> b;

   cout << b << "! is ";

   while ( b > 0 )
   {
      a *= b;
      b = b - 1;
   }
   cout << a << endl;
}
