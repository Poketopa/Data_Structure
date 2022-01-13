#include <list>
#include <iostream>
using namespace std;

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