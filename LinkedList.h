#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class LinkedList{
	private:
		Node<T> *head;
		Node<T> *end;
		int size;
	public:
		LinkedList(){
			head = end = nullptr;
			size = 0;
		}
		void push_back(T value){
			Node<T> *newNodo = new Node<T>(value);
			if(size == 0){
				head = newNodo;
			}
			else{
				end->next = newNodo;
			}
			end = newNodo;
			size++;
		}
		void show(){
			Node<T> *aux = head;
			while(aux != NULL){
				cout << aux->value << "->";
				aux = aux->next;
			}
		}
};

#endif
