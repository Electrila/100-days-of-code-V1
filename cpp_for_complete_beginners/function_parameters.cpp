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

void process_selection(int choice) {
	switch (choice) {
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

}

int main() {

	show_menu();
	int selection = menu_selection();
	process_selection(selection);

	return 0;
}