#include "Library.hpp"
#include <iostream>

DLL::DLL()
{
	_size = 0;
	back = nullptr;
	front = nullptr;
}

DLL::~DLL()
{
	while (_size)
		pop_front();
}

bool DLL::isEmpty()
{
	if (_size == 0) return true;
	return false;
}

void DLL::push_front(int input)
{
	Node* node = new Node();
	node->data = input;
	if (_size == 0)
	{
		++_size;
		front = node;
		back = node;
		return;
	}
	node->next = front;
	front->pre = node;
	front = node;
	_size++;
}
void DLL::push_back(int input)
{
	Node* node = new Node();
	node->data = input;

	if (_size == 0)
	{
		++_size;
		front = node;
		back = node;
		return;
	}
	++_size;
	node->pre = back;
	back->next = node;
	back = node;
}

void DLL::pop_front()
{
	assert(_size && "List is empty. cannot call pop_front().");
	--_size;
	Node* popFrontNode = front;
	front = front->next;
	delete popFrontNode;
}

void DLL::pop_back()
{
	assert(_size && "List is empty. cannot call pop_back().");
	--_size;
	Node* popBackNode = back;
	back = back->pre;
	delete popBackNode;
}

void DLL::insert(int location, int input)
{
	if (location == 0)
	{
		push_front(input);
		return;
	}
	else if (location == _size)
	{
		push_back(input);
		return;
	}

	int index = 0;

	Node* node = new Node();
	node->data = input;
	Node* p = front;
	for (; index != location && p != getback(); p = p->next)
		++index;

	Node* pPre = p->pre;
	node->pre = pPre;
	pPre->next = node;

	node->next = p;
	p->pre = node;
	++_size;
}

void DLL::erase(int location)
{
	assert(_size && "no Node for erase, con not call erase()");
	if (location == 0)
	{
		pop_front();
		return;
	}
	else if (location == _size - 1)
	{
		pop_back();
		return;
	}
	int index = 0;
	Node* p = front;
	for (; index != location && p != getback(); p = p->next)
		++index;
	Node* popNode = p;
	popNode->pre->next = popNode->next;
	popNode->next->pre = popNode->pre;
	delete popNode;
	--_size;
}

Node* DLL::getfront()
{
	return front;
}

Node* DLL::getback()
{
	return back;
}

int DLL::size()
{
	return _size;
}

int DLL::frontData()
{
	return front->data;
}

int DLL::backData()
{
	return back->data;
}

void DLL::print()
{
	for (Node* p = front; p != back->next; p = p->next)
	{
		cout << p->data << " ";
	}
	cout << endl;
}