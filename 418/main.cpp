#include <iostream>

using namespace std;

int main()
{
    cout << "N \t" << "N*10 \t" << "N*1000 \t" << endl;
      int n = 1;
    while ( n <= 5 )
   {
    cout << endl;
    cout << n <<"\t"<< n * 10 <<"\t" << n * 100 <<"\t"<< n * 1000 <<"\t";
    n = n+1;
    }
}
