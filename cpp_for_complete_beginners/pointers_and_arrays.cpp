#include <iostream>
using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	string *p_texts = texts;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << p_texts[i] << " " << flush;
	}

	cout << endl;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string);
			i++, p_texts++) {
		cout << *p_texts << " " << flush;

	}

	cout << endl;

	string *p_element = &texts[0];
	string *p_end = &texts[2];

	while (true) {
		cout << *p_element << " " << flush;

		if (p_element == p_end) {
			break;
		}

		p_element++;
	}

	return 0;
}
