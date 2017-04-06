#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include <string>
#include "shape.hpp"

class Circle : public Shape {
	public:
		int getType();
		string getTypeString();
};

#endif
