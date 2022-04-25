#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
	//string Name; //Hidden properties are class or encapsulated
	string Company;
	int Age;
protected:
	string Name;
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
			std::cout << Name << "sorry No promotion for you! " << std::endl;

	}
	virtual void Work() {
		std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
	}
};

class Developer :public Employee { //Have to inherit developer class to Employee : AbstractEmployee class
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage)
		:Employee(name, company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void Fixbug() {
		std::cout << Name << "fixed bugs using " << FavProgrammingLanguage << std::endl;
	}
	void Work() {
		std::cout << Name << "is writing " << FavProgrammingLanguage << " code" << std::endl;
	}

};

class Teacher :public Employee {
public:
	string Subject;  //Everything in this class are Private here. We can't access them outs
	void Preparelesson() {
		std::cout << Name << "is preparing " << Subject << " lesson " << std::endl;
	}
	Teacher(string name, string company, int age, string subject)
		:Employee(name, company, age)
	{
		Subject = subject;
	}
	void Work() {
		std::cout << Name << " is teaching " << Subject << std::endl;
	}
};

int main()
{
	Developer d = Developer("Dedsec ", "Dedsec Empire ", 18, "Python");
	Teacher t = Teacher("Harry ", "Boring School ", 35, "History");


	Employee* e1 = &d;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();



	system("pause>0");


}
