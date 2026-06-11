#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node *leftchilde;
    Node *rightchild;

    //constructor for the node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchilde = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //initially ROOT to null
    }

    //insert a nide un the binary search tree
    void insert(string element)
    {
        Node *newNode = new Node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftchilde = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentNode = NULL;

        search(element, parent, currentNode);
    }
}