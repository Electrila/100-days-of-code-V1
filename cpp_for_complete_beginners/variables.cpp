#include <iostream>
using namespace std;

int main() {

	int number_cats = 5;
	int number_dogs = 7;
	int number_animals = number_cats + number_dogs;

	cout << "Number of cats: " << number_cats << endl;
	cout << "Number of dogs: " << number_dogs << endl;

	cout << "Total number of animals: " << number_animals << endl;

	cout << "New dog acquired" << endl;

	number_dogs = number_dogs + 1;

	cout << "New number of dogs: " << number_dogs << endl;

	return 0;
}
