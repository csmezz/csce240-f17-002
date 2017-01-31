#include <iostream>
using namespace std;

int main () {
	int * i;
	i = new int;
	int p;
	int * result;
	result = new int;
	for (p = 0; p > 10; p++) {
		for (*i = 6; *i < 10; *i = (*i + 1)) {
			*result = p + *i;
		}
	}
	cout << *result << endl;
	return 0;
}
