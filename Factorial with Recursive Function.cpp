#include <iostream>
using namespace std;

//Factorial Numbers using Recursive Function

int recursive_factorial(int num) {
	if (num == 1)
		return num;
	return num * recursive_factorial(num - 1);
}

int main() 
{
	int num;
	cout << "Enter number ";
	cin >> num;

	cout << "factorial of " << recursive_factorial(num) << endl;

	return 0;


}
