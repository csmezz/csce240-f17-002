#include <iostream>
#include <string>

// Dynamically allocated string printing and retrieval.
// Provided during SI Session 1 for CSCE 240 Section 003
// git://github.com/cskeen/csce240-si/

using namespace std;

int main() {
	string * our_string;
	our_string = new string;
	cout << "Please input a character on the next line, and I will transform it.\n";
	getline(cin, *our_string);
	for (int i = 0; i <= 5; i++) {
		cout << *our_string;
		if (i == 5) {
			cout << endl;
		}
	}
	return 0;
}

/* 
Before you run it--what do you think this code will do?

There is a subtle bug introduced in this code--can you find it? Can you describe it? This type of bug does not prevent execution, but would cost points on a later project.
*/
