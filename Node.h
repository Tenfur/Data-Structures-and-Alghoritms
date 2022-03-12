#ifndef  NODE_H
#define  NODE_H

template <class T>
class Node{
	public:
		T value;
		Node<T> *next;
		Node(T value){
			this->value = value;
			next = nullptr;
		}
};

#endif
