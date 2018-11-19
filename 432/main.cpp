#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << " Please enter three nonzero integers " << endl;
    cin >> a >> b >> c ;
    if( a+b>c&&a+c>b&&b+c>a )
        cout << " Yes ";
    else
        cout << " No ";
}
