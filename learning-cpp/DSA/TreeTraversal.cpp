#include <iostream>
#include "BT.h"
#include <stack>
#include <queue>
using namespace std;

//center left right
void preorder_recursive(TreeNode *root){
    if(!root)
        return;
    cout<<root->data<<endl;
    preorder_recursive(root->left);
    preorder_recursive(root->right);
}
void preorder_iterative(TreeNode *root){
    if(!root)
        return;
    stack <TreeNode *> st;
    st.push(root);
    while(!st.empty()){
        while(1){
            cout<<st.top()->data<<endl;
            if(st.top()->left)
                st.push(st.top()->left);
            else
                break;
        }
        TreeNode *end;
        while(!st.empty()){
            end=st.top();
            st.pop();
            if(end->right){
                st.push(end->right);
                break;
            }
        }

    }
}
//left center right
void inorder_recursive(TreeNode *root){
    if(!root)
        return;
    inorder_recursive(root->left);
    cout<<root->data<<endl;
    inorder_recursive(root->right);
}
void inorder_iterative(TreeNode *root){
    if(!root)
        return;
    stack <TreeNode *> st;
    st.push(root);
    while(!st.empty()){
        while(st.top()->left){
                st.push(st.top()->left);
        }
        while(!st.empty()){
            cout<<st.top()->data<<endl;
            TreeNode *end=st.top();
            st.pop();
            if(end->right){
                st.push(end->right);
                break;
            }
        }
    }
}
//left right center
void postorder_recursive(TreeNode *root){
    if(!root)
        return;
    postorder_recursive(root->left);
    postorder_recursive(root->right);
    cout<<root->data<<endl;
}
void postorder_iterative(TreeNode *root){
    stack <TreeNode *> st;
    TreeNode *top,*prev=nullptr;
    st.push(root);
    while(!st.empty()){
        top=st.top();
        if(top->right!=prev&&top->left!=prev){
            if(top->right)
                st.push(top->right);
            if(top->left)
                st.push(top->left);
        }
        if((!top->left&&!top->right)||(top->left==prev||top->right==prev)){
            prev=top;
            st.pop();
            cout<<prev->data<<endl;
        }
    }
}
void levelorder(TreeNode* root){
    queue <TreeNode*> q;
    q.push(root);
    TreeNode *first;
    while(!q.empty()){
        first=q.front();
        cout<<first->data<<endl;
        q.pop();
        if(first->left)
            q.push(first->left);
        if(first->right)
            q.push(first->right);
    }
}
int max_recursive(TreeNode*root){
    if(!root)
        return 0;
    int left=max_recursive(root->left);
    int right=max_recursive(root->right);
    left=left>right?left:right;
    return root->data>left?root->data:left;
}


int main(){
    BinaryTree bt;
    bt.assign_root(new TreeNode(1));
    TreeNode *root=bt.return_root();
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    root->left->right->right=new TreeNode(8);
    cout<<"preorder_recursive\n";
    preorder_recursive(bt.return_root());
    cout<<"preorder_iterative\n";
    preorder_iterative(bt.return_root());
    cout<<"inorder_recursive\n";
    inorder_recursive(bt.return_root());
    cout<<"inorder_iterative\n";
    inorder_iterative(bt.return_root());
    cout<<"postorder_recursive\n";
    postorder_recursive(bt.return_root());
    cout<<"postorder_iterative\n";
    postorder_iterative(bt.return_root());
    cout<<"Levelorder \n";
    levelorder(bt.return_root());
    cout<<"Max is : "<<max_recursive(bt.return_root())<<endl;
}