#include <iostream>
using namespace std;

// Prime numbers using Return Function

bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}

void main() 
{
	int number;
	cout << "Number: ";
	cin >> number;

	bool isPrimeFlag = isPrimeNumber(number);

	if (isPrimeFlag)
		cout << "Prime number " << endl;
	else
		cout << "Not prime number " << endl;

	system("pause>0");

}
