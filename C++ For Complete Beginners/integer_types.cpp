#include <iostream>
#include <climits>
using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long long int l_value = 2345325345345;
	cout << l_value << endl;

	short int s_value = 23434;
	cout << s_value << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int u_value = 2342343;
	cout << u_value << endl;

	return 0;
}
