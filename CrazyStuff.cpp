#include <iostream>
using namespace std;

//Passing Multiple Parameters

void IntroduceMe(string name, string city, int age) {
	cout << "I am " << name << endl;
	cout << "I am from " << city << endl;
	cout << "I am " << age << " years old" << endl;
}

int main() 
{
	string name1, city1;
	int age1;
	cout << "Name: ";
	cin >> name1;
	cout << "City: ";
	cin >> city1;
	cout << "Age: ";
	cin >> age1;
	IntroduceMe(name1, city1, age1);
	

	//IntroduceMe("Dedsec ","Istanbul ", 18);
	//IntroduceMe("Tony Stark ", "New york ", 35);

	system("pause>0");
}