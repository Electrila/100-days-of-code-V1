#include <iostream>
using namespace std;

void show_menu() {
	cout << "1.\tSearch" << endl;
	cout << "2.\tView Record" << endl;
	cout << "3.\tQuit" << endl;
}

int menu_selection() {
	cout << "Enter selection: " << flush;

	int input;
	cin >> input;

	return input;
}

int main() {

	show_menu();
	int input = menu_selection();

	switch (input) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}

	return 0;
}
