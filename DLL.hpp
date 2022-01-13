#pragma once
#include <assert.h>
struct Node {
	int data;
	Node* next = nullptr;
	Node* pre = nullptr;
};

class DLL {
public:
	DLL();
	~DLL();
	void push_front(int input); //시작 부분 삽입
	void pop_front(); //시작 부분 제거
	void push_back(int input); // 끝 부분 삽입
	void pop_back(); //끝 부분 제거
	void insert(int location, int input);
	void erase(int location);
	bool isEmpty();
	int size();
	void print();

	int frontData();
	int backData();
	Node* getfront();
	Node* getback();

private:
	int _size;
	Node* back; //리스트 맨 뒤 반환
	Node* front; //리스트 맨 앞 반환
};