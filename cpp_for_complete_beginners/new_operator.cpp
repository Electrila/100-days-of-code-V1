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

	Animal *p_cat1 = new Animal();
	p_cat1->set_name("Freddy");
	p_cat1->speak();
	delete p_cat1;

	cout << sizeof(p_cat1) << endl;

	return 0;
}
