#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *p_texts = texts;

	p_texts += 3;
	cout << *p_texts << endl;

	p_texts -= 2;
	cout << *p_texts << endl;

	string *p_end = &texts[NSTRINGS];
	p_texts = &texts[0];

	while (p_texts != p_end) {
		cout << *p_texts << endl;
		p_texts++;
	}

	p_texts = &texts[0];

	long elements = (long) (p_end - p_texts);

	cout << elements << endl;

	p_texts = &texts[0];

	p_texts += NSTRINGS / 2;
	cout << *p_texts << endl;

	return 0;
}
