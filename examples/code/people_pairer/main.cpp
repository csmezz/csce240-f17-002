// People Pairer
// Written Sept. 12th 2017
// Finds unique random pairs of people.
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int size;
	cout << "How many people are in the room?" << endl;
	cin >> size;
	vector<string> people();
	for (int i = 0; i < size; i++) {
		people.push_back( (i+1).toString() );
	}
	vector<vector<string>> pairs();
	rand(time(0));
	int p_size;
	if ((size % 2) == 0) {
		p_size = size / 2;
	}
	else {
		p_size = (size + 1) / 2;
	}
	for (int i = 0; i < size; i++) {
		int rand = randint(0, p_size);
	}
}
