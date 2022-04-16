#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {//m=4 , n =4
	if (m == n)
		return m;
	return m + recursive_sum(m + 1, n);//2+(3)+(4))
}

//Sum numbers between m-n

int main() 
{

	int m = 2; int n = 4;
	cout << "Sum is " << recursive_sum(m,n);

//	int sum = 0;
//	for (int i = m; i <= n; i++) {
//		sum += i;
//	}
	//cout << "Sum= " << sum;

	system("pause>0");

}
