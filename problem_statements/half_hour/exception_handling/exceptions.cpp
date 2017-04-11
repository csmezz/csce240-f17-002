#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
	vector<int> tickets;
	srand(time(NULL));
	for (int i = 0; i < 40; i++) {
		tickets.push_back((rand() % 100));
	}
	// Your Code Goes Here.
	// Iterate through the tickets vector.
	// Use exception handling to print a 
	// warning to the console whenever
	// the ticket's value is divisible
	// by 3.
	// Hint: https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm


	// End Your Code
	return 0;
}
