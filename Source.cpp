
#include <iostream>
#include <string>
#include "Rational.h"
using namespace std;

int main()
{
	// Create and initialize two rational numbers r1 and r2.
	Rational r1(2, 3);
	Rational r2(5, 7);
	Rational r3(3, 5);
	Rational r4(7, 2);
	Rational r5(5, 6);
	Rational r6(5, 7);

	cout << "first=" << r1 + (r2*r3) << endl;
	cout << "second=" << (r4 - r5) / r6 << endl;

	cout << "++first=" << ++r1 + (r2*r3) << endl;
	cout << "--second=" << --((r4 - r5) / r6) << endl;

	cout << "44/21<41/15";


	system("pause");
	return 0;
}