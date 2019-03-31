#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;

   a.enterTerms();
   b.enterTerms();
   t = a;
   cout << "第一个多项式是:\n";
   a.printPolynomial();
   cout << "第二个多项式是:\n";
   b.printPolynomial();
   cout << "\n加上多项式:\n";
   c = a + b;
   c.printPolynomial();
   cout << "\n+= 结果:\n";
   a += b;
   a.printPolynomial();
   cout << "\n减去多项式:\n";
   a = t;
   c = a - b;
   c.printPolynomial();
   cout << "\n-= 结果:\n";
   a -= b;
   a.printPolynomial();
   cout << "\n乘上多项式:\n";
   a = t;
   c = a * b;
   c.printPolynomial();
   cout << "\n*= 结果:\n";
   a *= b;
   a.printPolynomial();
   cout << endl;
}
