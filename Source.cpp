#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;

	int sum;
	sum = num1 + num2 + num3;

	cout << "The sum of\n" << num1 << ", " << num2 << ", " << "and" << num3 << endl;
	cout << "is " << sum;

	return 0;
}