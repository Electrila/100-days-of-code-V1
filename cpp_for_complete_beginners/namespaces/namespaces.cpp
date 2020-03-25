#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;

using namespace mec;

int main() {

	Cat cat;
	cat.speak();

	mec::Cat cat2;
	cat.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << mec::CATNAME << endl;
	cout << cats::CATNAME << endl;
	cout << CATNAME << endl;

	return 0;
}
