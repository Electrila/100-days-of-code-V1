#include <iostream>
using namespace std;

void show1(const int n_elements, string texts[]) {

	// cout << sizeof(texts) << endl;  Returns sizeof pointer

	for (int i = 0; i < n_elements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int n_elements, string *texts) {

	// cout << sizeof(texts) << endl;  Returns sizeof pointer

	for (int i = 0; i < n_elements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]) {

	// cout << sizeof(texts) << endl;  Returns sizeof pointer

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

char* get_memory() {
	char *p_mem = new char[100];

	return p_mem;
}

void free_memory(char *p_mem) {
	delete[] p_mem;
}

int main() {

	string texts[] = { "apple", "orange", "banana" };

	cout << sizeof(texts) << endl;

	show1(3, texts);
	cout << endl;
	show2(3, texts);
	cout << endl;
	show3(texts);

	char *p_memory = get_memory();
	free_memory(p_memory);

	return 0;
}
