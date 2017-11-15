#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <unistd.h>

using namespace std;

int main() {
	ifstream ascii ("horror.txt");
	if (!ascii) {
		cerr << "Could not open horror.txt" << endl;
		exit(1);
	}

	string InputLine;
	stringstream spacer;
	int count = 1;
	int multi = 1;
	while (true) {
		system("clear");
		while(ascii) {
			ascii >> InputLine;
			spacer.str(string());
			for (int i = 0; i < count; i++) {
				spacer << " ";	
			}
			cout << spacer.str() << InputLine << endl;
		}
		ascii.clear();
		ascii.seekg(0);
		if (count % 58 == 0) {
			multi = multi * -1;
		}
		count = count + multi;
		usleep(35000);
	}

	return 0;
}
