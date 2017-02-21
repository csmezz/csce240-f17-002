#ifndef SIMPLE_STRING_H
#define SIMPLE_STRING_H

struct node{
	char character;
	struct node *next;
} *first;

class Simple_String{
	public:
		Simple_String();
		Simple_String(char element); // Creates a Simple String from a single character element.
		Simple_String(char * string); // Creates a Simple String using a complete character array.
		Simple_String(const Simple_String &original); // Copy Constructor for Simple_String
		~Simple_String(); // Destructor for Simple_String
		char getCharacter(); // Returns the current character.
		char* getString(); // Returns the rest of the string after the current element.
		void addCharacter(char c); // Inserts a new Simple_String node containing the character at the end of the string.
		void insertCharacter(char c); // Inserts a new Simple_String node containing the character as the next element in the string.
		void insertString(char* s); // Inserts a full string in the next element, then links the old string segment to the last element of the new string segment.
		void setNext(simple_string &ss); // Set the next variable.
		void setCharacter(char c); // Set the character variable.
};

#endif
