#include <iostream>
using namespace std;

int main() {
	int * p;
	p = new string;
	*p = "Captain Flappy Pants found himself stranded on an island he didn't want to be on."
	
	for (int i = 0; i < *p.length(); i++) {
		if (p[i] == ' ') {
			cout << endl;
		}
		else {
			cout << p[i];
		}
	}
	delete p;
	return 0;
}
