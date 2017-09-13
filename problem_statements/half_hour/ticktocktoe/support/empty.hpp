#ifndef EMPTY_HPP_
#define EMPTY_HPP_

#include <string>
#include "shape.hpp"

class Empty : public Shape {
	public:
		int getType();
		string getTypeString();
};

#endif
