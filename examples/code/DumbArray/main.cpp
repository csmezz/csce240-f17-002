#include "BigArray.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Boilerplate code to produce two character arrays, hello_a and world_a, that are the parts of "Hello World!".
	string hello = "Hello";
	string world = " World!";
	char hello_a[hello.size() + 1];
	char world_a[world.size() + 1];
	strcpy(hello_a, hello.c_str());
	strcpy(world_a, world.c_str());
	// End Boilerplate

	BigArray * hello_ba = new BigArray(5, hello_a);
	BigArray *  world_ba = new BigArray(7, world_a);
	BigArray * both = hello_ba->concat(world_ba);
	cout << both->getCharacters();
	return 0;
}
