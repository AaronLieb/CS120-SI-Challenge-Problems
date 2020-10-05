#include <iostream>
#include <math.h> // imports sqrt and pow function,
using namespace std;

/* Calculate the result of the quadratic formula
 * using the doubles a, b, and c.
 * The variables represent the 3 coefficients of a quadratic equation of the form
 * ax^2 + bx + c
 * The equation for the quadratic formula is:
 * x = (-b +/- sqrt(b^2 - 4ac))/2a
 *
 * If both solutions exist the program should print them out
 * Otherwise, the program should crash
 *
 * The sqrt and pow functions are used as follows:
 * sqrt(num)
 * pow(base, exponent)
*/

int main() {
	double a, b, c;
	cout << "Enter the value for a: ";
	cin >> a;
	cout << "Enter the value for b: ";
	cin >> b;
	cout << "Enter the value for c: ";
	cin >> c;

	/* Start your code here */
	double x, x1;

	x = ((-1 * b) + (sqrt(b*b - (4*a*c))))/(2*a);
	x1 = ((-1 * b) - (sqrt(b*b - (4*a*c))))/(2*a);
	cout << x << "\n" << x1 << "\n";

	/* End your code here */

	return 0;
}
