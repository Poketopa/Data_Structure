#pragma once
#include <assert.h>


struct sNode 
{
	int data;
	sNode* pre = nullptr;
};

class Stack
{
public:
	Stack();
	~Stack();

	void push(int input);
	void pop();
	bool isEmpty();
	int size();
	void print();
	int top();

private:
	sNode* sTop;
	int sSize;
};