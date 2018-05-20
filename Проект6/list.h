#pragma once
#include"Headers.h"

template <typename T>
class List {
public:
	class Node {
	public:
		T data;
		Node * nextPtr;
		Node(T data) {
			this->data = data;
			nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

	List()
	{
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}

	void pushback(T data);
	void pushfront(T data);
	void removeLast();
	void removeFirst();
	T & operator [](int index);
	bool find(T data);
	void print();
	size_t Size();
	~List();
};


