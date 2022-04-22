#include <iostream>
#include <queue>

// check if a given binary tree is a BST
// 

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

bool isSubtreeLesser(Node* root, int value){
    if ( root == NULL ) return true;
    if ( root -> data <= value && isSubtreeLesser( root -> left, value ) && isSubtreeLesser(root -> right, value ) ) return true;
    else return false;
};

bool isSubtreeGreater(Node* root, int value){
    if ( root == NULL ) return true;
    if ( root -> data > value && isSubtreeGreater( root -> left, value ) && isSubtreeGreater(root -> right, value ) ) return true;
    else return false;
};

bool isBST(Node* root){
    if ( root == NULL ) return true;
    if (isSubtreeLesser( root -> left, root -> data ) && isSubtreeGreater( root -> right, root -> data ) && isBST( root -> left ) && isBST( root -> right ) ) return true;
    else return false;
}

int main(){
    BinaryTree tree;
    Node* root;

    root = tree.getRoot();

    root = tree.insert(root, 7);
    root = tree.insert(root, 4);
    root = tree.insert(root, 9);
    root = tree.insert(root, 1);
    root = tree.insert(root, 6);

    std::cout << (isBST(root) ? "yes" : "no") << std::endl;
    return 0;
}