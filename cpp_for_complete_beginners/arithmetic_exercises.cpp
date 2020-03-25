#include <iostream>
using namespace std;

/* Exercises:
 * 1. Convert large # of seconds to hours, minutes, & seconds
 * 2. Write a for loop that iterates 10,000 times; output a dot on the same line every 100 iterations (use %)
 */

int main() {

	cout << "Exercise 1: " << endl;
	int seconds = 8675309;
	int minutes = seconds / 60;
	int hours = minutes / 60;

	cout << "Number of seconds to convert: " << seconds << endl;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << int(minutes % 60) << endl;
	cout << "Seconds: " << int(seconds % 60) << endl;

	cout << "======================================" << endl;

	cout << "Exercise 2: " << endl;
	for (int i = 0; i < 10000; i++) {
		if (i % 100 == 0) {
			cout << "." << flush;
		}
	}

	return 0;
}
