#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
	public:
		T data;
		T* prev;
		T* next;
}

#endif
