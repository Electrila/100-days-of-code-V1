#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

namespace mec {

const string CATNAME = "Kimbo";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace mec */

#endif /* ANIMALS_H_ */
