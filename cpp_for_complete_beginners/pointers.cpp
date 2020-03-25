#include <iostream>
using namespace std;

void manipulate(double *p_value) {
	cout << "2. Value of double in manipulate: " << *p_value << endl;
	*p_value = 10.0;
	cout << "3. Value of double in manipulate after reassignment: " << *p_value
			<< endl;
}

int main() {

	int n_value = 8;
	int *pn_value = &n_value;

	cout << "Int value: " << n_value << endl;
	cout << "Pointer to int address: " << pn_value << endl;
	cout << "Int value via pointer: " << *pn_value << endl;

	cout << "====================================" << endl;

	double d_value = 123.4;

	cout << "1. d_value: " << d_value << endl;
	manipulate(&d_value);
	cout << "4. d_value: " << d_value << endl;

	return 0;
}
