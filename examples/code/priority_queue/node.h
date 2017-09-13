#ifndef NODE_H_
#define NODE_H_

#include <string>

class Node {
	private:
		int key;
		string content;
		Node * left;
		Node * right;
	public:
		Node();
		Node(int key_value);
		Node(int key_value, string content_string);
		~Node();
		Node* getLeft();
		Node* getRight();
		string getContent();
		int getKey();
};

#endif
