#include <iostream>
using namespace std;

int main() {

	//User enter side lengths of a triangle (a,b,c)
	/*Program should write out wheater that triangle is equilateral (all three sides of same length),
	isosceles (two sides of same length), or scalane (all three sides of different length)*/

	float a, b, c;
	cout << "a,b,c: ";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral triangle ";
	else {

		if (a != b && a != c && b != c)
			cout << "Isosceles triangle ";
		else
			cout << "Scalane triangle ";

		system("pause>0");
		return 0;
	}
