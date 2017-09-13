#include "recursion.h"

using namespace std;

// Does arbitrary two-element recursion to produce an additive sequence of two elements. 
// Takes a vector in the form of <first element, second element>, returns the nth element of the resulting 
// sequence.
int arb_rec(int * vector, int n) {
	if (n < 1) {
		return -1;
	}
	if (n == 1) {
		return vector[0];
	}
	else if (n == 2) {
		return vector[1];
	}
	else {
		return arb_rec(vector, (n-1)) + arb_rec(vector, (n-2));
	}
}

// Returns nth element of the fibonacci sequence.
int fib(int n) {
	int fibo_start[2] = {1,1};
	return arb_rec(fibo_start, n);
}

// Returns nth element of the Skeen sequence
// Stub code not provided.
