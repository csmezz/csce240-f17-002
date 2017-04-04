#include "queue.h"
#include "node.h"
#include <string>
#include <cmath>

using namespace std;

Queue::Queue() {
	root = NULL;
	size = 0;
}

Queue::Queue(Node &root_node) {
	root = root_node;
	size = 1;
}

Queue:~Queue() {
	// Nothing required right now.
}

int insert(Node &parent, Node &new_element) {
	if (parent->left != NULL) {
		parent->right = new_element;
		return 0;
	}
	else if (parent->right != NULL) {
		parent->left = new_element;
	}
	else {
		return 1;
	}
}

int Queue::push(Node& starting_element, Node &new_element) {
	int layers = floor(log2(size));
	int layer_size = exp2(layers);
	int row_pos = (size % layer_size) + 1;
	Node * parent = starting_element;
	if ((parent->left != NULL) && (parent->right != NULL)) {
		for (int i = 0; i < layers; i++) {
			layer_size = layer_size / 2;
			if (row_pos <= layer_size) {
				parent = starting_element->left;
			}
			else {
				parent = starting_element->right;
				row_pos = row_pos - layer_size;
			}
		}
	}
	return insert(parent, new_element);
}

Node Queue::pop() {
	Node *replacement;
	Node *vict_left = victim->left;
	Node *vict_right = victim->right;
	if (vict_left->getKey() <= vict_right->getKey()) {
		replacement = vict_right;
	}
	else {
		replacement = vict_left;
	}
	
}

int Queue::heapify(Node &starting_element) {
	int parent_key = starting_element->getKey();
	int left_key = starting_element->left->getKey();
	int right_key = starting_element->right->getKey();
	Node* temp;
	if (left_key > parent_key) {
		temp = starting_element;
		parent->left = 
	}
}


