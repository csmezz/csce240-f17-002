#include <iostream>
using namespace std;

// The original version of this has string[12] rather than string[13], which causes the character array to be one character too short
// It's missing space for the terminator character!

int main() {
	char string[13] = "Hello World!";
	printf("%s", string);
	return 0;
}
