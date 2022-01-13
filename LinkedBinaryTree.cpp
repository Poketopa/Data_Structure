#include <iostream>
#include <list>
#include "Library.hpp"
using namespace std;

LinkedBinaryTree::LinkedBinaryTree() 
: _root(NULL),n(0) {};

int LinkedBinaryTree:: size() const 
{ return n; }

bool LinkedBinaryTree:: empty() const 
{ return size() == 0; }

LinkedBinaryTree::Position LinkedBinaryTree::root() const 
{ return Position(_root);}

void LinkedBinaryTree::addRoot(){ 
    _root = new lNode; 
    n = 1; 
}

LinkedBinaryTree::PositionList LinkedBinaryTree::positions() const{
    PositionList pl;
    preorder(_root, pl);
    return PositionList(pl);
}

void LinkedBinaryTree::preorder(lNode* v, LinkedBinaryTree::PositionList& pl)const{
    pl.push_back(Position(v));
    if(v->left != NULL)
        preorder(v->left, pl);
    if(v->right != NULL)
        preorder(v->right, pl);
}

void LinkedBinaryTree::expandExternal(const LinkedBinaryTree::Position& p){
    lNode* v = p.v;
    v->left = new lNode;
    v->left->parent = v;
    v->right = new lNode;
    v->right->parent = v;
    n += 2;
}

LinkedBinaryTree::Position LinkedBinaryTree::removeAboveExternal(const Position& p){
    lNode* w = p.v;
    lNode* v = w->parent;
    lNode* sib = (w == v->left ? v->right : v->left);
    if(v == _root){
        _root = sib;
        sib->parent = NULL;
    }
    else {
        lNode* gpar = v->parent;
        if(v == gpar->left) 
            gpar->left = sib;
        else 
            gpar->right = sib;
        sib->parent = gpar;
    }
    delete w;
    delete v;
    n -=2;

    return Position(sib);
}