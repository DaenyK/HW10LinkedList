#include "list.h"

template<typename T>
void List<T>::pushback(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void List<T>::pushfront(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		Node *  e = new Node(data);
		e->nextPtr = firstPtr;
		firstPtr = e;
	}
	count++;
}

template<typename T>
void List<T>::removeLast()
{
	if (Size() == 1)
	{
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node * cp = firstPtr;
		while (cp->nextPtr != lastPtr) {
			cp = cp->nextPtr;
		}
		delete lastPtr;
		lastPtr = cp;
		cp->nextPtr = nullptr;
	}
	count -= 1;

}

template<typename T>
void List<T>::removeFirst()
{
	if (Size() == 1)
	{
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node * cp;
		cp = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = cp;
	}
	count -= 1;
}

template<typename T>
T & List<T>::operator[](int index)
{
	Node *cp = firstPtr;
	int *tmp;
	tmp = new int[this->Size()];
	int count = 0;
	tmp[0] = firstPtr->data;
	if (index >= this->Size())
	{
		cout << "вы ввели индекс, который больше возможного\n";
		system("pause");
		exit(1);
	}
	if (index == 0)
		return tmp[0];
	while (cp != lastPtr)
	{
		cp = cp->nextPtr;
		count++;
		tmp[count] = cp->data;
		if (count == index)
			return tmp[count];
	}
}

template<typename T>
bool List<T>::find(T data)
{
	for (int i = 0; i < this->Size(); i++)
	{
		if (this->operator[](i) == data)
			return true;
	}
}

template<typename T>
void List<T>::print()
{
	Node *curPtr = firstPtr;
	cout << curPtr->data << endl;

	while (curPtr != lastPtr) {
		curPtr = curPtr->nextPtr;
		cout << curPtr->data << endl;
	}
	if (count == 0)
		cout << "ничего нет\n";

}

template<typename T>
size_t List<T>::Size()
{
	return count;
}

template<typename T>
List<T>::~List()
{
	Node *cp;

	while (firstPtr != nullptr)
	{
		cp = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = cp;
		count -= 1;
	}
	delete firstPtr;

}
