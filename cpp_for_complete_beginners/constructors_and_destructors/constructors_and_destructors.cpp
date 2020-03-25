#include <iostream>
#include "Cat.h"
using namespace std;

int main() {

	cout << "Starting program..." << endl;

	{
		Cat lilli;
		lilli.speak();
	}

	cout << "Ending program..." << endl;

	return 0;
}
