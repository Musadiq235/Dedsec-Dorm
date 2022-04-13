#include <iostream>
using namespace std;

int main() {

	//Reversing number
	int number, reversednumber = 0;
	cout << "Number: ";
	cin >> number;

	while (number != 0) {
		reversednumber *= 10;
		//int LastDigit = number % 10;
		reversednumber += number % 10;
		number /= 10;
	}
	cout << "Reversed: " << reversednumber;

	system("pause>0");
}
