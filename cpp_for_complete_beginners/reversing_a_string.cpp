#include <iostream>
using namespace std;

int main() {

	char text[] = "reverse this string";

	int n_chars = sizeof(text) - 1;

	char *p_start = text;
	char *p_end = text + n_chars - 1;

	while (p_start < p_end) {

		char save = *p_start;
		*p_start = *p_end;
		*p_end = save;

		p_start++;
		p_end--;
	}

	cout << text << endl;

	return 0;
}
