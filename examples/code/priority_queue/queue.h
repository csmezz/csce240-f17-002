#ifndef QUEUE_H_
#define QUEUE_H_

#include "node.h"

class queue {
	private:
		Node* root;
		int size;
	public:
		Queue();
		Queue(Node &root_node);
		~Queue();
		int insert(Node &parent, Node &element);
		int push(Node &starting_element, Node &new_element);
		Node pop();
		int heapify(Node &starting_element);
}

#endif
