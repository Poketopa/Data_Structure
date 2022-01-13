#include "Stack.cpp"
#include "Queue.cpp"
#include "DLL.cpp"
#include "Graph.cpp"
#include "LinkedBinaryTree.cpp"
#include <iostream>
using namespace std;
int main()
{
		//Stack test
	cout << "Stack test" << endl;
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	st.push(4);
	st.pop();
	st.pop();
	st.push(5);

	st.print();

	//st.pop(); pop assertion
	//st.pop();
	//Queue test
	cout << "Queue test" << endl;
	Queue qu;
	qu.push(1);
	qu.push(2);
	qu.push(3);
	qu.push(4);
	cout << qu.rear() << endl;
	cout << qu.front() << endl;
	qu.pop();
	cout << qu.rear() << endl;
	cout << qu.front() << endl;
	qu.push(7);
	qu.pop();
	qu.print();


	//DLL test
	cout << "DLL test" << endl;
	DLL dl;
	dl.push_front(1);
	dl.push_front(2);
	dl.push_back(3);
	dl.push_back(4);
	dl.push_back(5);
	dl.insert(1, 8);
	dl.erase(2);
	dl.print();
	
	//Graph test
	cout<<"Graph test"<<endl;
	Graph* gr = new Graph();

    gr->setEdge(0, 1);
    gr->setEdge(0, 2);
    gr->setEdge(2, 3);
    gr->setEdge(2, 4);
	gr->setEdge(4, 5);

	for (int i = 0; i < gr->getSize(); i++) {
        for (int j = 0; j < gr->getSize(); j++) {
            cout << gr->stateEdge(i, j);
        }
        cout << endl;
    }
	
    gr->bfs(gr);
	
	cout<<endl;
	//LinkedBinaryTree
	cout << "LinkedBinary test" << endl;

	LinkedBinaryTree x;
    
    LinkedBinaryTree::Position p1;
    LinkedBinaryTree::Position p2;

    LinkedBinaryTree::Position q1=LinkedBinaryTree::Position();
    LinkedBinaryTree::Position q2=x.root();
    LinkedBinaryTree::Position *r=new LinkedBinaryTree::Position();

    q2.print();
}