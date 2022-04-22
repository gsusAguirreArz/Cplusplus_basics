#include <iostream>

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

            // iterative sol
            // Node* curr = root;
            // while ( curr -> left != NULL ){
            //     curr = curr -> left;
            // }
            // return curr -> data;

            // recursive sol
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

};

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

    std::cout << "Min value: " << tree.min(root) << "\n" << "Max value: " << tree.max(root) << "\n";
    return 0;
}