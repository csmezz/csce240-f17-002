#include "node.h"
#include <string>

using namespace std;

Node::Node() {
	key = 0;
	content = "";
	left = NULL;
	right = NULL;
}

Node::Node(int key_value) {
	key = key_value;
	content = "";
	left = NULL;
	right = NULL;
}

Node::Node(int key_value, string content_string) {
	key = key_value;
	content = content_string;
	left = NULL;
	right = NULL;
}

Node::~Node() {
	// Nothing required so far...
}

Node* Node::getLeft() {
	return left;
}

Node* Node::getRight() {
	return right;
}

string getContent() {
	return content;
}

int getKey() {
	return key;
}
