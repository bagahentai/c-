#include <iostream>
using namespace std;

int main()
{

   int a = 0;
   int b = 0;
   int studentCounter = 1;
   int result;

   while ( studentCounter <= 10 )
   {
      cout << "Enter result (1 = pass, 2 = fail): ";
      cin >> result;

      if ( result == 1 )
      {
         a = a + 1;
         studentCounter = studentCounter + 1;
      }
      else if ( result == 2 )
      {
         b = b + 1;
         studentCounter = studentCounter + 1;
      }
      else
      {
         cout << "Invalid input" << endl;
      }
   }

   cout << "Passed " << a << "\nFailed " << b1
        << endl;

   if ( a > 8 )
      cout << "Bonus to instructor!" << endl;
}
