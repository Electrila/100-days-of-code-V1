#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person(): name(""), age(0) {};
	Person(string name, int age): name(name), age(age) {};

	string to_string();
};

#endif /* PERSON_H_ */
