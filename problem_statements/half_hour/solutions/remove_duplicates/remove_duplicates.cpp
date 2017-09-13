#include <iostream>

using namespace std;

struct Node {
	int number,
	Node * head,
	Node * tail
};

struct List {
	int length,
	Node * front,
	Node * cursor,
	int curs_index
};

Node * create_node(int number) {
	Node temp = new Node();
	temp->number = this.number;
	temp->head = NULL;
	temp->tail = NULL;
	return temp;
}

Node * create_node(int number, Node & parent) {
	Node temp = new Node();
	temp->number = this.number;
	temp->head = this.parent;
	temp->tail = NULL;
	return temp;
}

List * remove_duplicates(int[] input_array) {
	//Your Duplicate Removal Code Goes Here.
}

int main() {
	const int in_length = 10;
	const int input[in_length] = {5, 1, 2, 3, 4, 4, 6, 6, 7, 8};
	Node * cursor;
	List * output;
	if (input[0] = null) {
		return 0;
	}
	else {
		output = remove_duplicates(input);
	}
}
