#include <iostream>
using std::string;

class Employee {
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
};
int main() 
{
	Employee employee1 = Employee("Dedsec ", "Dedsec Empire ", 18);
	//employee1.Name = "Dedsec ";
	//employee1.Company = "Dedsec_Empire ";
	//employee1.Age = 18;
	employee1.IntroduceYourself();

	Employee employee2 = Employee("Emma ", "Amazon ", 19);
	//employee2.Name = "Emma ";
	//employee2.Company = "Amazon ";
	//employee2.Age = 19;
	employee2.IntroduceYourself();

	system("pause>0 ");


}

