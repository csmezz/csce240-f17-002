#include <iostream>

using namespace std;

void getInput(double &x, double &y);

int main() {
	double x(0.0), y(0.0);

	getInput(x, y);
	cout << "The inputted values of x and y are : ";
	cout << x << " and " << y << endl;
	return 0;
}

void getInput (double &x, double &y) {
	cout << "Input equation below..." << endl;
	char top;
	cin >> x >> top >> y;
}
