#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;

   a.enterTerms();
   b.enterTerms();
   t = a;
   cout << "��һ������ʽ��:\n";
   a.printPolynomial();
   cout << "�ڶ�������ʽ��:\n";
   b.printPolynomial();
   cout << "\n���϶���ʽ:\n";
   c = a + b;
   c.printPolynomial();
   cout << "\n+= ���:\n";
   a += b;
   a.printPolynomial();
   cout << "\n��ȥ����ʽ:\n";
   a = t;
   c = a - b;
   c.printPolynomial();
   cout << "\n-= ���:\n";
   a -= b;
   a.printPolynomial();
   cout << "\n���϶���ʽ:\n";
   a = t;
   c = a * b;
   c.printPolynomial();
   cout << "\n*= ���:\n";
   a *= b;
   a.printPolynomial();
   cout << endl;
}
