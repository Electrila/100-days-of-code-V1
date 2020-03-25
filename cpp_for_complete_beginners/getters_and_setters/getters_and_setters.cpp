#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;

	person.set_name("Christopher");

	cout << person.to_string() << endl;

	cout << "Name of person with get method: " << person.get_name() << endl;

	return 0;
}
