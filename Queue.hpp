#pragma once
#include <assert.h>
template<typename T>
struct qNode
{
	T data;
	qNode<T>* next = nullptr;  // before을 link로 이름 변경 예정
};

template<typename T>
class Queue
{
public:
	Queue();
	~Queue();

	void push(T input);
	void pop();
	bool isEmpty();
	int size();
	T front();
	T rear();
	void print();

private:
	qNode<T>* qRear;
	qNode<T>* qFront;
	int qSize;

};