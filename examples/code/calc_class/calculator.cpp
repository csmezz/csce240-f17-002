// This is a class that defines a simple calculator object.
// It should implement the prototype described in calculator.hpp
// I've gone ahead and implemented a few for you, to give you an 
// idea of how it's supposed to work.

#include "calcualtor.hpp"

int Calculator::getTotal() {
	return mem_register[0];
}

void Calculator::copyTotalForward() {
	mem_register[1] = mem_register[0];
}

void Calculator::add() {
	mem_register[0] = mem_register[1] + mem_register[2];
}
