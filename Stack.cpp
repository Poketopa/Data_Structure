#include "Library.hpp"
#include <iostream>
using namespace std;

Stack::Stack()
{
	sSize = 0;
	sTop = nullptr;
}

Stack::~Stack()
{
	while (sSize)
		pop();
}

void Stack::push(int input)
{
	sNode* node = new sNode();
	node->data = input;
	if (sSize == 0)
	{
		++sSize;
		sTop = node;
		return;
	}

	++sSize;
	node->pre = sTop;
	sTop = node;
}

void Stack::pop()
{
	assert(sSize && "stack is empty, can not call pop()");

	--sSize;
	sNode* popNode = sTop;
	sTop = sTop->pre;
	delete popNode;
}

int Stack::top()
{
	assert(sSize && "stack is empty, can not call top()");
	return sTop->data;
}

bool Stack::isEmpty()
{
	if (sSize == 0)
	{
		return true;
	}
	else return false;
}

int Stack::size()
{
	return sSize;
}

void Stack::print()
{
	sNode* p = sTop;
	for (; p != nullptr; p = p->pre)
	{
		cout << p->data << " ";
	}
	cout << endl;
}