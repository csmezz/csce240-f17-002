// Memory Leaker
// Written by Christopher Skeen
// This program leaks memory in a controlled manner to demonstrate valgrind.

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void leaks(); // This is the leaky version of the code.
void fixed(); // This is the function students will implement to fix the leaky code.

int main(int argc, char* argv[]) {
	if (argc > 1) {
		if ( !strcmp(argv[1], "leaky") ) {
			leaks();
		}
		else if ( !strcmp(argv[1], "student") ) {
			fixed();
		}
		else {
			return 1;
		}
	}
	return 0;
}

void leaks() {
	string* str1 = new string("This ");
	string* str2 = new string("Code ");
	string* str3 = new string("Leaks ");
	string* str4 = new string("Like ");
	string* str5 = new string("A ");
	string* str6 = new string("Seive.");
	cout << *str1 << *str2 << *str3 << *str4 << *str5 << *str6 << endl;
}

void fixed() {
	// The student's implementation will print out "The last sentence was a lie" in the samw word-by word style
	// as leaks(), but without the memory leaks. There are at least two ways to solve this problem that are valid
	// C++.

	// Uncomment the following line--your code must implement a solution to this.
	// cout << *str1 << *str2 << *str3 << *str4 << *str5 << *str6 << endl;
}
