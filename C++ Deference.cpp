#include <iostream>
using namespace std;

int main() {

	string food = "hamburger";
	string* ptr = &food;

	cout << ptr << endl;
    //Reference: Output the memory address of food with the pointer (0x6dfed4)

	cout << *ptr << endl;
	//// Dereference: Output the value of food with the pointer (Pizza)
	
	system("pause>0");
}