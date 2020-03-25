#include <iostream>
using namespace std;

void change_something(double &value) {
	value = 123.4;
}

int main() {

	int value1 = 8;
	int &value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 4.321;
	change_something(value);
	cout << value << endl;

	return 0;
}
