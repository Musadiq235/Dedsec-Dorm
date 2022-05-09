#include <iostream>
#include <cmath>;
using namespace std;

int main() {

	//Program of Quadratic Equation

	float a, b, c, x1, x2;
	cout << "Enter the value of a,b,c: ";
	cin >> a >>  b >> c;

	x1 = -b + sqrt(pow(b,2)) - (4 * a * c) / (2 * a);
	x2 = -b - sqrt(pow(b, 2) - (4 * a * c) / (2 * a));

	cout << "The value of quadratic equation is " << x1 << endl;
	cout << "The value of quadratic equation is " << x2;


	system("pause>0");
	return 0;
}