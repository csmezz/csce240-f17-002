#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "Enter the length of a word." << endl;
	int dec_length;
	cin >> dec_length;
	char string[dec_length];
	cout << endl << "Enter a word." << endl;
	cin >> string;
	cout << endl << "Checking to see if it is a palindrome..." << endl;
	char palindrome[dec_length];
	int midpoint = floor(strlen(string)/2);
	for (int i = 0; i <= (midpoint * 2); i++) {
		string[i] = string[(midpoint * 2) - i];
		cout << palindrome[i];
	}
	cout << endl << "The result is..." << endl;
	bool result = strcmp(palindrome, string);
	if (result) {
		cout << endl << "False!" << endl;
	}
	else {
		cout << endl << "True!" << endl;
	}
	return 0;
}
