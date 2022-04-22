#include <iostream>

using namespace std;

// how to decide which data structre to use?

// 1. what need to be stored?
// 2. cost of operations
// 3. memory usage
// 4. ease of implementation

// trees -> hierarchical data.

// Applications
// - storing naturally hierarchical data eg file system
// - organize data for quick search, insertion, deletion eg binary search tree
// - trie eg dictionary
// - network routing algorithm

// root (only one that haves no parent), children, parent, sibling (have same parent), leaf (has no child)
// if we can go from a to b
// a is ancestor of b
// b is descendent of a

// recursive data structure!!!
// in a tree of N nodes it has N-1 edges

// depth and height
// depth of x = length of path from root to x or No of edges in path from root to x
// height of x = number of edges in longest path from x to a leaf
// height of tree is the height of the root

// BInary tree (balanced)

// two implementations
// 1. dynamically created nodes
// 2. arrays (heaps)

// any node have at least two children

class Node{
    public:
        int value;
        Node *Lchild, *Rchild;

        Node( int x){
            this -> value = x;
            Lchild = NULL;
            Rchild = NULL;
        }
};

class BinaryTree{
    private:
        Node* root;

        Node* getNewNode( int x ){
            Node* aux = new Node(x);
            aux -> Lchild = NULL;
            aux -> Rchild = NULL;
            return aux;
        }
    
    public:
        BinaryTree(){
            root = NULL;
        }
};


int main(){

    BinaryTree tree;


    return 0;
}