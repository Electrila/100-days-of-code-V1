#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meow!" << endl;
	} else {
		cout << "Hiss!" << endl;
	}
}
