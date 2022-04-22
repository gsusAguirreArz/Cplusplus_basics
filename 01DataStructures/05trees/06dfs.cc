#include <iostream>
#include <queue>

// DFS

// preorder DLR
// time - O(n)
// space - O(n)

// 1. visit root
// 2. visit left sub-tree
// 3. visit right sub-tree

// inorder LDR
// postorder LRD

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

void dfs_preorder(Node* root){
    if ( root == NULL ) return;
    std::cout << root -> data << " ";
    dfs_preorder( root -> left );
    dfs_preorder( root -> right );
}

void dfs_inorder(Node* root){
    if ( root == NULL ) return;
    dfs_inorder( root -> left );
    std::cout << root -> data << " ";
    dfs_inorder( root -> right );
}

void dfs_postorder( Node* root ){
    if ( root == NULL ) return;
    dfs_postorder( root -> left );
    dfs_postorder( root -> right );
    std::cout << root -> data << " ";
}

int main(){
    BinaryTree tree;
    Node* root;

    root = tree.getRoot();

    root = tree.insert(root, 15);
    root = tree.insert(root, 10);
    root = tree.insert(root, 20);
    root = tree.insert(root, 25);
    root = tree.insert(root, 8);
    root = tree.insert(root, 12);

    dfs_preorder(root);
    std::cout << std::endl;
    dfs_inorder(root);
    std::cout << std::endl;
    dfs_postorder(root);
    std::cout << std::endl;
    return 0;
}