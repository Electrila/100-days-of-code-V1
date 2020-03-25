#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "Megann";
}

string Person::to_string() {
	return "Person's name is: " + name;
}

void Person::set_name(string new_name) {
	name = new_name;
}

string Person::get_name() {
	return name;
}
