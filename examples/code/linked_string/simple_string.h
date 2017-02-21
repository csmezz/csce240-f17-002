#ifndef SIMPLE_STRING_H
#define SIMPLE_STRING_H

class Simple_String{
	private:
		char character;
		simple_string* next;
	public:
		Simple_String();
		Simple_String(char element);
		Simple_String(const Simple_String &original);
		~Simple_String();
		char getCharacter(); // Returns the current character.
		char* getString(); // Returns the rest of the string after the current element.
		void addCharacter(char c); // Inserts a new Simple_String node containing the character at the end of the string.
		void insertCharacter(char c); // Inserts a new Simple_String node containing the character as the next element in the string.
		void insertString(char* s); // Insserts a full string in the next element, then links the old string segment to the last element of the new string segment.
};

#endif
