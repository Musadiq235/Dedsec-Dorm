#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee {
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
	void AskforPromotion() {
		if (Age >= 30)
			std::cout << Name << "got promoted! " << std::endl;
		else
			std::cout << Name << " sorry No promotion for you! " << std::endl;

	}
};
int main()
{
	Employee employee1 = Employee("Dedsec ", "Dedsec Empire ", 24);


	Employee employee2 = Employee("Emma ", "Amazon ", 22);


	Employee employee3 = Employee("Conor ", "Cyberlife ", 30);



	employee2.AskforPromotion();
	employee3.AskforPromotion();



	system("pause>0");


}
