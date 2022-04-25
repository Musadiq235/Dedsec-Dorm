#include <iostream>
using namespace std;

struct info {
	string name;
	string company;
	int age;
};

int main() {

	info info1;
	info1.name = "Dedsec";
	info1.company = "Dedsec Empire";
	info1.age = 18;

	
	info info2;
	info2.name = "Emma";
	info2.company = "Dedsec Empire";
	info2.age = 19;


	cout << info1.name << " is the CEO of " << info1.company << " and he is " << info1.age << " years old" << endl;
	cout << info2.name << " is executive assistant of " << info2.company << " and she is " << info2.age << " years old " << endl;

	system("pause>0");

	return 0;

}
