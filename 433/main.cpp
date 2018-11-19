#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << " Please enter three nonzero integers " << endl;
    cin >> a >> b >> c ;
    if( a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a )
        cout << " Yes ";
    else
        cout << " No ";
}
