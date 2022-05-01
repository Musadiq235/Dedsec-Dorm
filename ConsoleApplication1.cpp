#include <iostream>
using namespace std;

void table() {

	int n;
	cout << "Enter the value of table ";
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}

}

int main() {

	table();
	table();

	system("pause>0");
}
