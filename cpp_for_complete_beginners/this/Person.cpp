#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}

string Person::to_string() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
