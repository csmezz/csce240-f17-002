#ifndef CROSS_HPP_
#define CROSS_HPP_

#include <string>
#include "shape.hpp"

class Cross : public Shape {
	public:
		int getType();
		string getTypeString();
};

#endif
