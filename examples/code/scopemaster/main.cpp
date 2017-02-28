#include <iostream>
using namespace std;

int i = 0;

int scopemaster(int i) {
	i = 2;
	return i;
}

int scope(int i) {
	for (int i = 1; i < 3; i++) {
		i = i + scopemaster(i);
	}
	return i;
}

int main() {
	cout << scope(1) << endl;
}
