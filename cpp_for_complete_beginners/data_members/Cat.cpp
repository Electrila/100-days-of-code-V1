#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {

	if (happy) {
		cout << "Meow!" << endl;
	} else {
		cout << "Hiss!" << endl;
	}
}

void Cat::make_happy() {
	happy = true;
}

void Cat::make_sad() {
	happy = false;
}
