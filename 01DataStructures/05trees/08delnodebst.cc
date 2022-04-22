#include <iostream>
#include <queue>

// delete node of a bst

// case 1: No child
// easy to delete justo un link and free memory

// case 2: One child
// justo link to next child and free memory

// case 3: Two children
// substitute the node you want to delte with the minimum vale of the right subtree and create new link or find max in left copy the value in targetted node delete duplciate from left subtree
// 1. find min in right subtree
// 2. copy the value in targetted node
// 3. delete duplicate from right subtree

class Node{
    public:
        int data;
        Node *left, *right;

        Node( int x ){
            this -> data = x;
            left = NULL;
            right = NULL;
        }
};

class BinaryTree{
    private:
        Node* root;

        Node* getNewNode(int x){
            Node* aux = new Node(x);
            aux -> left = NULL;
            aux -> right = NULL;
            return aux;
        }
    
    public:
        BinaryTree(){
            root = NULL;
        }

        Node* getRoot(){
            return root;
        }

        Node* insert(Node* root, int x){
            if ( root == NULL )
                root = getNewNode(x);
            else if ( x <= root -> data )
                root -> left = insert( root -> left, x );
            else
                root -> right = insert( root -> right, x );
            return root;
        }

        bool search( Node* root, int x){
            if ( root == NULL ) return false;
            else if ( root -> data == x ) return true;
            else if ( x <= root -> data ) return search( root -> left, x );
            else return search( root -> right, x );
        }

        int min( Node* root ){
            if (root == NULL ) return -1;
            else if ( root -> left == NULL ) return root -> data;
            return min( root -> left );
        }

        int max( Node* root ){
            if ( root == NULL ) return -1;
            Node* temp = root;
            while ( temp -> right != NULL ){
                temp = temp -> right;
            }
            return temp -> data;
        }

        int height( Node* root ){
            if ( root == NULL ) return -1;
            return std::max( height( root -> left ), height( root -> right ) ) + 1;
        }
};

Node* FindMin(Node* root){
    if ( root == NULL ) return NULL;
    else if ( root -> left == NULL ) return root;
    return FindMin( root -> left );
}

Node* erase(Node* root, int data ){
    if ( root == NULL ) return root;
    else if ( data < root -> data ) root -> left = erase( root -> left, data );
    else if ( data > root -> data ) root -> right = erase( root -> right, data);
    else{
        // case 1: NO child
        if ( root -> left == NULL && root -> right == NULL ){
            delete root;
            root = NULL;
            // return root;
        }

        // case 2: one child
        else if ( root -> left == NULL ){
            Node* aux = root;
            root = root -> right;
            delete aux;
            // return root;
        }
        else if ( root -> right == NULL ){
            Node* aux = root;
            root = root -> left;
            delete aux;
            // return root;
        }

        // case 3: 2 children
        else{
            Node* aux = FindMin( root -> right );
            root -> data = aux -> data;
            root -> right = erase( root -> right, aux -> data );
        }
    }
    return root;
}

int main(){
    BinaryTree tree;
    Node* root;

    root = tree.getRoot();

    root = tree.insert(root, 12);
    root = tree.insert(root, 5);
    root = tree.insert(root, 15);
    root = tree.insert(root, 3);
    root = tree.insert(root, 7);
    root = tree.insert(root, 13);
    root = tree.insert(root, 17);
    root = tree.insert(root, 1);
    root = tree.insert(root, 9);

    std::cout << (tree.search(root, 12) ? "yes" : "no") << std::endl;
    erase(root, 12);
    std::cout << (tree.search(root, 12) ? "yes" : "no") << std::endl;




    return 0;
}