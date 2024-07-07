#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode():data(0),left(nullptr),right(nullptr){};
    TreeNode(const int val):data(val),left(nullptr),right(nullptr){};
};

class BinaryTree{
    TreeNode *root;
public:
    BinaryTree():root(nullptr){};
    void assign_root(TreeNode *root){
        this->root=root;
    }
    TreeNode *return_root(){
        return root;
    }
    void empty_tree(TreeNode *ptr){
        if(ptr->right)
            empty_tree(ptr->right);
        if(ptr->left)
            empty_tree(ptr->left);
        free(ptr);
    }
};