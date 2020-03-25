#include <iostream>
using namespace std;

int main() {

	bool b_value = true;
	cout << b_value << endl;

	char c_value = 'g';
	cout << c_value << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t w_value = 'i';
	cout << (char) w_value << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
