#include "BigArray.h"
#include <cstring>
#include <cstdio>

using namespace std;

BigArray::BigArray(int len) {
	bigarray.length = len;
	bigarray.characters = new char[bigarray.length];
}

BigArray::BigArray(int len, char * array) {
	bigarray.length = len;
	bigarray.characters = array;
}

BigArray::~BigArray() {
	delete bigarray.characters;
}


int BigArray::getLength() {
	return bigarray.length;
}

char * BigArray::getCharacters() {
	return bigarray.characters;
}

BigArray * BigArray::concat(BigArray * b) {
	int temp_length = bigarray.length + b->getLength();
	char * temp_characters = new char[temp_length];
	strcat(temp_characters, bigarray.characters);
	strcat(temp_characters, b->getCharacters());
	return new BigArray(temp_length, temp_characters);
}
