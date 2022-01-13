class Graph{
    private:
        int size;
        int Node[10];
		int Matrix[10][10];
		int visited[50];
    public:
        Graph();
		~Graph();
        int getSize();
        int stateEdge(int x,int y);
        void setEdge(int x, int y);
		void resetEdge(int x,int y);
        void bfs(Graph* graph);
};