#include <iostream>

using namespace std;


int main() {
	int p;
	p = new int[5];

	for (int i = 0; i < 5; i++) {
		p[i] = i + (i*2);
	}

	for (int j = 0; j < 5; j++) {
		cout << p[j] << endl;
	}

	delete p;
	return 0;
}
