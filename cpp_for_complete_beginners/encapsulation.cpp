// Encapsulation

#include <iostream>
using namespace std;

class Frog {
private:
	string name;
	string get_name() { return name; }

public:
	Frog(string name): name(name) {}
	void info() { cout << "My name is: " << get_name() << endl; }
};

int main() {

	Frog frog("Freddy");

	frog.info();

	return 0;
}

