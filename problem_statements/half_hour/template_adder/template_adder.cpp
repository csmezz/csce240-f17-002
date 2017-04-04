#include "number.h"
#include <iostream>

using namespace std;

// Implement your add function here. This should use
// template to be able to take a generic number.
// Should handle add(T first,T second) call.

int main() {
	Number * first;
	Number * second;
	first = new Number(BLUE);
	second = new Number(GREEN);
	cout << add(first, second) << endl;
}
