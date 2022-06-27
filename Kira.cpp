#include <iostream>
using namespace std;

class Rectangle {
private:
	double width;
	double length;
public:
	Rectangle() {
		width = 0;
		length = 0;
	}
	void area(double w, double l) {
		width = w * l;
		length = 2 + (w * l);
	}
	void displaydata() {
		cout << "The area is " << width << endl;
		cout << "The perimeter is " << length << endl;
	}
};
int main() {
	Rectangle r1, r2;
	r1.area(2, 12);
	r1.displaydata();
	system("pause>0");
	return 0;
}