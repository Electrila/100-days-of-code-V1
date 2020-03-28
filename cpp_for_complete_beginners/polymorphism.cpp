#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak()=0;

	virtual ~Animal() {};
};

class Cat: public Animal {
public:
	virtual void speak() {
		cout << "Hiss!" << endl;
	}

	virtual ~Cat() {};
};

class HouseCat: public Cat {
public:
	virtual void speak() {
		cout << "Meow!" << endl;
	}

	virtual ~HouseCat() {};
};

int main() {

	Animal *p_animal = new HouseCat;

	p_animal->speak();

	delete p_animal;

	return 0;
}
