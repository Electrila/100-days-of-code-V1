#include <iostream>
#include "Cat.h"
using namespace std;

namespace cats {

Cat::Cat() {
}

Cat::~Cat() {
}

void Cat::speak() {
	cout << "Meow!" << endl;
}

}
