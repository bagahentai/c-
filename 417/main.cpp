#include <iostream>

using namespace std;

int main()
{
  int counter = 1;
  int number = 0;
  int largest = 0;

  while ( counter <= 10 )
    {counter = counter+1;
    cin >> number;
    if ( number > largest )
    {
      largest = number ;
    }
     else
      {

    }
  cout << "the largest is " << largest << endl ;
    }
}
