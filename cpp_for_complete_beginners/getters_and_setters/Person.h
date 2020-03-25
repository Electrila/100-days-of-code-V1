#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
	string name;

public:
	Person();
	string to_string();
	void set_name(string new_name);
	string get_name();
};

#endif /* PERSON_H_ */
