#include "number.h"

using namespace std;

Number::Number() {
	this->value = 0;
}

Number::Number(int val) {
	this->value = val;
}

int Number::getValue() {
	return this->value;
}
