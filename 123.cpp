#include <iostream>
using std::string;

class Employee {
private:
	string Name;    //Hidden properties are class or encapsulated
	string Company;
	int Age;
public:

	void setName(string name) {//setter
		Name = name;
	}
	string getName() {//getter
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if (age >= 18)
			Age = age;
	}
	int getAge() {
		return Age;
	}


	void IntroduceYourself() {
		std::cout << "Name: - " << Name << std::endl;
		std::cout << "Company: - " << Company << std::endl;
		std::cout << "Age: - " << Age << std::endl;
	}
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;

	}
};
int main()
{
	Employee employee1 = Employee("Dedsec ", "Dedsec Empire ", 24);
	employee1.IntroduceYourself();

	Employee employee2 = Employee("Emma ", "Amazon ", 22);
	employee2.IntroduceYourself();

	employee1.setAge(24);
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << std::endl;

	employee1.setCompany("Dedsec Empire ");
	std::cout << employee1.getName() << "is CEO of " << employee1.getCompany() << std::endl;

	employee2.setName("Emma ");
	std::cout << employee2.getName() << "is executive assistant of " << employee1.getCompany() << std::endl;



	system("pause>0");


}
