#include <iostream>
using namespace std;

int main() {
	int integer1 = new int;
	int integer2 = new int;
	int integer3 = new int;
	int output = new int;
	*integer1 = 5;
	*integer2 = 3;
	*integer3 = 10;
	*output = *integer1 + *integer2 + *integer3;
	cout << *output << endl;
	delete integer1;
	delete integer2;
	delete integer3;
	delete output;
	return 0;
}
