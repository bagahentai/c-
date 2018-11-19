#include <iostream>
using namespace std;

int main()
{
   double gallons;
   double miles;
   double milesPerGallon;
   double totalMilesPerGallon;
   double totalGallons = 0;
   double totalMiles = 0;

   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed << endl;

   while ( miles != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;

      totalMiles += miles;
      totalGallons += gallons;

      if ( gallons != 0 )
      {
         milesPerGallon =  miles / gallons;
         cout << "MPG this tankful: " << milesPerGallon;
      }

      if ( totalGallons != 0 )
      {
         totalMilesPerGallon = totalMiles / totalGallons;
         cout << "\nTotal MPG: " << totalMilesPerGallon;
      }

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   }
}
