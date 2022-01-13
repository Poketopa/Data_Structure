#include <iostream>
#include "Library.hpp"
using namespace std;

Graph::Graph()
{
	Node[10]={0,};
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
             resetEdge(i,j);
        }
    }
    size=0;
}

Graph::~Graph(){}
int Graph::getSize(){
    return size;
}

int Graph::stateEdge(int i,int j){
    return Matrix[i][j];
}

void Graph::setEdge(int x,int y){    //간선 삽입
    Matrix[x][y]=1;
    Matrix[y][x]=1;
}

void Graph::resetEdge(int x,int y){    //간선 삽입
    Matrix[x][y]=0;
}

void Graph::bfs(Graph* graph) {
    Queue qGraph;
    qGraph.push(0);
    for (int i = 0; i < graph->size; i++) {
        for (int j = 0; j < graph->size; j++) {
            if ((graph->Matrix[i][j] == 1) && (visited[j] == 0)) {
                qGraph.push(j);
                visited[j] = 1;
            }
        }
    }
    while (!qGraph.isEmpty()) {
        cout << qGraph.front() << ", ";
        qGraph.pop();
    }
}