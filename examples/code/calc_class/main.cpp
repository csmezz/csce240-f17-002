// Testbench for the calculator object. This should test every function at least once.

#include <iostream>
#include "calculator.hpp"

using namepsace std;

bool checkMath(Calculator obj, double expected) {
	if (obj.getTotal() == expected) {
		return true;
	}
	else {
		cout << "Failed!" << endl;
		return false;
	}
}

int main() {
	Calculator calc;
	cout << "Checking to make sure calculator initialized correctly..." << endl;
	cout << "Total register contains: " << calc.getTotal() << endl;
	if (calc.getTotal() == NULL) {
		cout << "Calculator initialized incorrectly!" << endl << endl;
		return 1;
	}
	
	// Checking addition...
	cout << "Checking addition function..." << endl;
	calc.loadRegister(1, 2.3);
	calc.loadRegister(2, 3.2);
	calc.add();
	cout << "2.3 + 3.2 = " << calc.getTotal() << " (Should be 5.5)" << endl;
	if (checkMath(calc, 5.5)) {
		cout << "Failed!" << endl;
		return 1;
	}

	// Checking subtraction...
	cout << "Checking subtraction function..." << endl;
	calc.copyTotalForward();
	calc.loadRegister(2, 1.5);
	calc.subtract();
	cout << "calc.getTotal() - 1.5 = " << calc.getTotal() << " (Should be 4.0)" << endl;
	if (checkMath(calc, 4.0)) {
		return 1;
	}

	// Checking multiply...
	cout << "Checking multiply function..." << endl;
	calc.copyTotalForward();
	calc.loadRegister(2, 3);
	calc.multiply();
	cout << "calc.getTotal() * 3 = " << calc.getTotal() << " (Should be 12.0)" << endl;
	if (checkMath(calc, 12.0)) {
		return 1;
	}

	// Checking Divide...
	cout << "Checking division function..." << endl;
	calc.copyTotalForward();
	calc.loadRegister(2, 4);
	calc.divide();
	cout << "calc.getTotal() / 4 = " << calc.getTotal() << " (Should be 3.0)" << endl;
	if (checkMath(calc, 3.0)) {
		return 1;
	}

	// Checking exp2...
	cout << "Checking exp2 function..." << endl;
	calc.copyTotalForward();
	calc.exp2();
	cout << "calc.getTotal() ^ 2 = " << calc.getTotal() << " (Should be 9.0)" << endl;
	if (checkMath(calc, 9.0)) {
		return 1;
	}


	// Checking sqrt...
	cout << "Checking sqrt function..." << endl;
	calc.copyTotalForward();
	calc.sqrt();
	cout << "sqrt( calc.getTotal() ) = " << calc.getTotal() << " (Should be 3.0)" << endl;
	if (checkMath(calc, 3.0)) {
		return 1;
	}
}
