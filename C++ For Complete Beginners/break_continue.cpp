#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {

		cout << "i is: " << i << endl;

		if (i == 3) {
			break;
		}

		cout << "Looping..." << endl;

	}

	for (int i = 0; i < 5; i++) {

		cout << "i is: " << i << endl;

		if (i == 3) {
			continue;
		}

		cout << "Looping..." << endl;
	}

	const string password = "hello";

	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if (input == password) {

			break;

		} else {

			cout << "Access denied." << endl;
		}

	} while (true);

	cout << "Password accepted." << endl;

	cout << "Program quitting..." << endl;

	return 0;
}
