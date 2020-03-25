#include <iostream>
#include "Cat.h"
using namespace std;

int main() {

	Cat kimbo;
	kimbo.make_happy();
	kimbo.speak();

	Cat winston;
	winston.make_sad();
	winston.speak();

	return 0;
}
