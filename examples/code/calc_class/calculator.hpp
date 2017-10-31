// This defines a prototype for a calculator object.
// Given an equation x + y = z, 
// z will be in register zero, x will be in register one,
// and y will be in register two.

class Calculator {
	public:
		Calculator();
		~Calculator(); // Destructor for Calculator.
		double getTotal(); // Total should be in register zero.
		void loadRegister(int register_index, double value);
		void copyTotalForward(); // Shoudl copy register zero to register 1.
		void add(); // Adds x and y, puts results in z.
		void subtract(); // Subtracts y from x, puts results in z.
		void multiply(); // Multiplies x by y, puts results in z.
		void divide(); // Divides x by y, puts results in z.
		void exp2(); // Finds x^2, puts results in z.
		void sqrt(); // Finds the square root of x, puts results in z.
	private:
		double* mem_register; // Make sure to read the top comment before initializing!
}
