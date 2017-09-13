#include <iostream>
using namespace std;

// The original version of this code had p > 10 in the outer loop, demonstrating a functional but incorrect
// example of a for loop. The compiler does not automatically capture this type of error, but the results
// are still nonsensical. Additionally, the original version failed to delete the pointers to i and result.

int main () {
	int * i;
	i = new int;
	int p;
	int * result;
	result = new int;
	for (p = 0; p < 10; p++) {
		for (*i = 6; *i < 10; *i = (*i + 1)) {
			*result = p + *i;
		}
	}
	cout << *result << endl;
	delete i;
	delete result;
	return 0;
}
