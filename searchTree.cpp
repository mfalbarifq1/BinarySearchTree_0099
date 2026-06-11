#include<iostream>
#include<string>
using namespace std;

class node{
public:
    string info;
    node*leftchild ;
    node*rightchild;


    node(string i,node*l,node*r){
        info = i;
        leftchild = l;
        rightchild=r;

        
    }

};


class BinaryTree
{
public: 
    node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; // Initializing ROOT to nul
    }

    // Insert a node in the binary search tree
    void insert(string element)
    