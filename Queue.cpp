#include "Library.hpp"

Queue::Queue()
{
	qSize = 0;
	qRear = nullptr;
	qFront = nullptr;
}
Queue::~Queue()
{
	while (qSize)
		pop();
}
void Queue::push(int input)
{
	qNode* node = new qNode();
	node->data = input;
	if (qSize == 0)
	{
		++qSize;
		qFront = node;
		qRear = node;
		return;
	}
	++qSize;
	qRear->next = node;
	qRear = node;
}
void Queue::pop()
{
	assert(qSize && "can not pop");
	--qSize;
	qNode* popNode = qFront;
	qFront = qFront->next;

	delete popNode;

}

bool Queue::isEmpty()
{
	if (qSize == 0)
	{
		return true;
	}
	else return false;
}

int Queue::size()
{
	return qSize;
}

int Queue::front()
{
	assert(qSize && "Queue is empty. cannot call front().");
	return qFront->data;
}
int Queue::rear()
{
	assert(qSize && "Queue is empty. cannot call rear().");
	return qRear->data;
}

void Queue::print()
{
	qNode* p = qFront;
	for (; p != nullptr ; p = p->next)
	{
		cout << p->data <<" ";
	}
	cout << endl;
}