#ifndef LIST_H
#define LIST_H

template<class T>
class List {
	public:
		List();
		List(T data);
		List(T data, T& prev, T& next);
		Node<T>* HEAD;
		Node<T>* CURRENT;
		Node<T>	Next();
		Node<T> At();
}

#endif
