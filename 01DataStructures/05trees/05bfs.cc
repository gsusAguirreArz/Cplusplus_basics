#include <iostream>
#include <queue>

// tree transversal

// BFS
// level order traversal

// DFS
// <root><left><right> - preorder traversal DLR
// <left><root><right> - inorder traversal LDR
// <left><right><root> - postorder traversal LRD

// Preorder (DLR) d ~ data, visit 

// how to traverse in level order? 
// use a queue!!
// queue nodes when not visited
// dequeue when visited and queue their children!

// time complexity - O(n)
// space complexity - O(n)

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

void bfs(Node* root){
    if (root == NULL) return;
    std::queue<Node*> Q;
    Q.push(root);

    while ( !Q.empty() ){
        Node* curr = Q.front();
        // visit node (print or other operation)
        std::cout << curr -> data << " ";
        if ( curr -> left != NULL ) Q.push( curr -> left );
        if ( curr -> right != NULL ) Q.push( curr -> right );
        Q.pop(); // removing the element at front
    }
    
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

    bfs(root);
    return 0;
}