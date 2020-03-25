#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float f_value = 123.456789;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << f_value << endl;

	double d_value = 123.456789;
	cout << setprecision(20) << fixed << d_value << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	long double l_value = 123.456789876543210;
	cout << setprecision(20) << fixed << l_value << endl;
	cout << "Size of long double: " << sizeof(l_value) << endl;

	return 0;
}
