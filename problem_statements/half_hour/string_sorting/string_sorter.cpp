#include <iostream>
#include <string>

using namespace std;

struct Word {
	string content;
	int length;
	Word * next;
};

class sortedList {
	private:
		Word * front;
		int length;
	public:
		sortedList();
		sortedList(Word first_element);
		int insertWord(Word a_string);
		Word pop();
		int printList();
};

sortedList::sortedList() {
	this->front = new Word();
	this->length = 0;
}

sortedList::sortedList(Word first_element) {
	this->front = &first_element;
	this->length = 1;
}

// Uses a merge sort to insert a word into the linked list in the correct spot.
int sortedList::insertWord(Word a_string) {
	// This is one of the functions you need to implement. Make sure to increment length.
	// Return 0 on success, return 1 on failure.
	return 0;
}

// Returns the Word at the start of the list.
Word sortedList::pop() {
	// This is the other function you need to implement. Make sure to decrement length. 
}

int sortedList::printList() {
	for (int i = 0; i < length; i++) {
		cout << pop().content << endl;
	}
	return 0;
}

// Use this to turn strings into Words, which are nodes in the list. If there isn't a next word, use NULL.
Word create_word(string a_string, Word * the_next) {
	Word temp = Word();
	temp.content = a_string;
	temp.length = a_string.length();
	temp.next = the_next;
	return temp;
}

int main() {
	string input[7]= {"a", "the", "four", "or", "apple", "franklin", "thomas"};
	sortedList list = sortedList(create_word(input[1], NULL));
	for (int i = 1; i < 7; i++) {
		list.insertWord(create_word(input[i], NULL));
	}
	list.printList();
	return 0;
}
