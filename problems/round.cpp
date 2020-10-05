#include <iostream>
using namespace std;

/*
 * You are given a double, x
 * floor x to the 2nd decimal place using
 * the operators '*' and '/'.
 *
 * print out the result.
 *
 * Hint: Integers cannot hold decimals.
*/

int main() {
	double x;
	cout << "Enter a number: ";
	cin >> x;

	/* Start your code here */
	// x = 7.2589
	// 7.25
	int y = x * 100; // 725
	x = y / 100.0;

	cout << x << "\n";

	/* End your code here */

	return 0;
}
