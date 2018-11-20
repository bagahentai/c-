#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int flip();

int main()
{
    int h = 0;
    int t = 0;
   srand( time( 0 ) );
  for ( int i ; i <= 100;i++ )
  {
      if ( flip() == 0)
        {
          ++t;
      cout << "Tail";
      }
      else
      {
          ++h;
          cout << "Head";
      }
      if( i % 10 == 0 )
          cout << endl;
  }
      cout << "\nThe total number of Heads was " << h
  << "\nThe total number of Tails was " << t << endl;
}

int flip()
{
    return rand() % 2;
}

