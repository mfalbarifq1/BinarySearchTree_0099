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
    {
        node *newNode = new node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        node *parent = NULL;
        node *currentNode = NULL;

        search(element, parent, currentNode);

        if (parent == NULL)
        {
            ROOT = newNode;
            return;
        }

        if (element < parent->info)
        {
            parent->leftchild = newNode;
        }
        else if (element > parent->info)
        {
            parent->rightchild = newNode;
        }
    }
