#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string new_name, int new_age) {
	name = new_name;
	age = new_age;
}

string Person::to_string() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
