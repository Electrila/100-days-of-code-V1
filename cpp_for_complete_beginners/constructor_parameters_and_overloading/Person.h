#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string new_name) { name = new_name; age = 0; };
	Person(string new_name, int new_age);
	string to_string();
};

#endif /* PERSON_H_ */