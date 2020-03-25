#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	void set_name(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };
};

int main() {

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.set_name("Freddy");
	animal.speak();

	int value = 8;
	int *p_value = &value;

	cout << *p_value << endl;

	int number = 11;

	p_value = &number; // Generates error with: int * const p_value = &value;
	*p_value = 12; // Generates error with: const int *p_value = &value;
	// Generates errors with both above statements: const int * const p_value = &value;

	cout << *p_value << endl;

	return 0;
}
