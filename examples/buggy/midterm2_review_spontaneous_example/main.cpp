#include <iostream>
using namespace std;

struct jellybean {
	int flavor_size;
	char * flavor;
	int color_size;
	char * color;
	int color_code;
};

char * operator+(char * right_hand_side) {
	
}

char * concatinate(char * left_hand_side, char * right_hand_side) {
	
}

jellybean create_jb(char * flavor, int flavor_size, char * color, int color_size, int color_code) {
	jellybean temp;
	temp.color = color;
	temp.flavor = flavor;
	temp.color_code = color_code;
	return temp;
}

int main() {
	jellybean jar[5];
	const char red[3] = "red";
	const char blue[4] = "blue";
	const char green[5] = "green";
	const char apple[5] = "apple";
	const char cherry[6] = "cherry";
	jar[0] = create_jb(red, 3, apple, 5, 1);
	jar[1] = create_jb(green, 5, apple, 5, 3);
	jar[2] = create_jb(red, 3, cherry, 6, 1);
	jar[3] = create_jb(blue, 4, cherry, 6, 2);
	jar[4] = create_jb(green, 5, cherry, 6, 3);
	
}
