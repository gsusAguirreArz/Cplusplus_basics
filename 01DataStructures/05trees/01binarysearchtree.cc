#include <iostream>

// bst
// is a binary tree in which for each node, value of all the nodes in left subtree is lesser or equal and value of all the nodes in right subtree is greater

class BstNode{
    public:
        int value;
        BstNode *left, *right;

        BstNode( int x ){
            this -> value = x;
            left = NULL;
            right = NULL;
        }
};

BstNode* getNewNode(int x){
    BstNode* aux = new BstNode(x);
    aux -> left = NULL;
    aux -> right = NULL;
    return aux;
}

bool search( BstNode* root, int x ){
    if ( root == NULL ){
        return false;
    }else if ( root -> value == x ){
        return true;
    }else if ( x <= root -> value ){
        return search( root -> left, x);
    }else{
        return search( root -> right, x);
    }
}
// three ways of implementing

// 1. returning a node

BstNode* insert( BstNode* root, int x ){
    if ( root == NULL ){
        root = getNewNode(x);
    }else if ( x <= root -> value ){
        root -> left = insert( root -> left, x );
    }else{
        root -> right = insert( root -> right, x );
    }
    return root; 
}

// 2. by reference

// void insert( BstNode** root, int x) {
//     BstNode* aux = *root;
//     if ( aux == NULL ){
//         aux = getNewNode(x);
//     }else if ( x <= aux -> value ){
//         insert( aux -> left, x);
//     }else{
//         insert( aux -> right, x);
//     }
//     return;
// }

// 3. declase root as a global variable while using (1.)

// BstNode* root = NULL;



int main(){

    // 1.
    BstNode* root;
    root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);

    // 2.
    // BstNode* root;
    // root = NULL;
    // insert(&root, 15);

    // 3. making it a global variable!
    

    int x;
    std::cout << "Enter number to be searched: \n";
    std::cin >> x;

    if ( search(root, x) )
        std::cout << "Yes!" << std::endl;
    else std:: cout << "No!" << std::endl;
    return 0;
}