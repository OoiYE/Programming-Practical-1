#include <iostream>
using namespace std;

int main() {

	int l, w;
	cout << "Please enter the length of rectangle: ";
	cin >> l;
	cout << "Please enter the width of rectangle: ";
	cin >> w;

	int ar, per;
	ar = l * w;
	per = 2 * (l + w);
	cout << "The area of rectangle is: " << ar << endl;
	cout << "The perimeter of rectangle is: " << per;
	return 0;
}
