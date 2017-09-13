#ifndef BIGARRAY_H
#define BIGARRAY_H

struct ary {
	int length;
	char * characters;
};

class BigArray {
	private:
		ary bigarray;
	public:
		BigArray(int len);
		BigArray(int len, char * array);
		~BigArray();
		int getLength();
		char * getCharacters();
		BigArray *  concat(BigArray * b);
	protected:
};

#endif
