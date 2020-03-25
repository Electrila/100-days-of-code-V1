#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal &other) :
			name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called." << endl;
	}

	void set_name(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

int main() {

	Animal *p_animal = new Animal[10];

	p_animal[5].set_name("George");
	p_animal[5].speak();

	delete[] p_animal;

	char *p_mem = new char[1000];
	delete[] p_mem;

	char c = 'a';
	c++;
	string name(1, c);
	cout << name << endl;

	return 0;
}
