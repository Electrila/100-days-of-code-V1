#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

string Person::to_string() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
