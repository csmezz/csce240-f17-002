#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <string>

using namespace std;

class Shape {
	public:
		virtual int getType() = 0;
		virtual string getTypeString() = 0;
};

#endif
