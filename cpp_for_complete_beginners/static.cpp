#include <iostream>
using namespace std;

// .h file
class Test {
private:
	int id;
	static int count;

public:
	// Initialization of const must be done here
	static int const MAX = 99;

public:
	Test() {
		id = count++;
	}

	int get_id() {
		return id;
	}

	static void show_info() {
		cout << count << endl;
	}
};

// .cpp file
int Test::count = 0;

int main() {

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object 1 ID: " << test1.get_id() << endl;

	Test test2;
	cout << "Object 2 ID: " << test2.get_id() << endl;

	Test::show_info();

	return 0;
}
