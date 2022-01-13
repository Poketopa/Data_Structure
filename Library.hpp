#ifndef LIBRARY
#define LIBRARY

#include <assert.h>
#include <iostream>
#include <list>

using namespace std;

//Stack --------------------------------------

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

//Queue --------------------------------------

struct qNode
{
	int data;
	qNode* next = nullptr;  // before을 link로 이름 변경 예정
};

class Queue
{
public:
	Queue();
	~Queue();

	void push(int input);
	void pop();
	bool isEmpty();
	int size();
	void print();
	int front();
	int rear();

private:
	qNode* qRear;
	qNode* qFront;
	int qSize;

};

//DLL --------------------------------------

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

//Graph --------------------------------------

class Graph{
    private:
        int size;
        int Node[10];
		int Matrix[10][10];
		int visited[100];
    public:
        Graph();
		~Graph();
		int getSize();
		int stateEdge(int x,int y);
        void setEdge(int x, int y);
		void resetEdge(int x,int y);
        void bfs(Graph* graph);
};

//LinkedBinaryTree


class lNode
{
public:
	int data;
	lNode* left;
	lNode* right;
    lNode* parent;
	lNode() : data(NULL), left(NULL), right(NULL) , parent(NULL){}
	lNode(int input): data(input), left(NULL), right(NULL) {}
};

class LinkedBinaryTree{
    public:
        class Position{
            private:
                lNode* v;
            public:
                Position(lNode* _v = NULL) : v(_v) {}
                int& operator*(){
                    return v->data;
                }
                Position left() const{
                    return Position(v->left);
                }
                Position right() const{
                    return Position(v->right);
                }
                Position parent() const{
                    return Position(v->parent);
                }
                bool isRoot() const{
                    return v->parent == NULL;
                }
                bool isExternal() const{
                    return (v->left == NULL) && (v->right == NULL);
                }
                void print() const{
                    cout<<v<<endl;
                }
                
                friend class LinkedBinaryTree;
        };

        typedef std::list<Position> PositionList;

    public:
        LinkedBinaryTree();
        int size() const;
        bool empty() const;
        Position root() const;
        PositionList positions() const;
        void addRoot();
        void expandExternal(const Position &p);
        Position removeAboveExternal(const Position& p);
        
    protected:
        void preorder(lNode* v, PositionList & pl) const;

    private:
        lNode* _root;
        int n;
};

#endif