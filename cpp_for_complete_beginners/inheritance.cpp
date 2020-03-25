#include <iostream>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "Grrrr" << endl;
	}
};

class Cat: public Animal {
public:
	void jump() {
		cout << "Cat jumping!" << endl;
	}
};

class Tiger: public Cat {
public:
	void attack_antelope() {
		cout << "Attacking!" << endl;
	}
};

int main() {

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.jump();
	tiger.speak();
	tiger.attack_antelope();

	return 0;
}
