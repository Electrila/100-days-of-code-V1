#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	cout << person1.to_string() << "; Memory location: " << &person1 << endl;
	cout << person2.to_string() << "; Memory location: " << &person2 << endl;
	cout << person3.to_string() << "; Memory location: " << &person3 << endl;

	return 0;
}
