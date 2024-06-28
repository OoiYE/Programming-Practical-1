#include <iostream>
using namespace std;

int main() {

	int current_year, birth_year;
	current_year = 2024;
	cout << "Your birth year is: ";
	cin >> birth_year;

	int age;
	age = current_year - birth_year;
	
	cout << "Your age is: " << age << endl;
	return 0;
}
