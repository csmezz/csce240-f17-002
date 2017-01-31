#include <iostream>
using namespace std;

int main() {
	char p[140] = "Captain Flappy Pants found himself stranded on an island he didn't want to be on.";
	
	for (int i = 0; i < 140; i++) {
		if (p[i] == ' ') {
			cout << endl;
		}
		else {
			cout << p[i];
		}
	}
	return 0;
}
