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

Animal* create_animal() {
	Animal *p_animal = new Animal();
	p_animal->set_name("Bertie");
	return p_animal;
}

int main() {

	Animal *p_frog = create_animal();
	p_frog->speak();
	delete p_frog;

	return 0;
}
