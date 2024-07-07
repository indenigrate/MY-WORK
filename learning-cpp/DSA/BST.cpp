#include <iostream>
#include "BT.h"
#include <queue>

void insert(TreeNode *root,int val){
    if(val>root->data){
        if(!root->right){
            root->right=new TreeNode(val);
            return;
        }
        else{
            insert(root->right,val);
            return;
        }
    }
    else{
        if(!root->left){
            root->left=new TreeNode(val);
            return;
        }
        else{
            insert(root->left,val);
            return;
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

TreeNode * search(TreeNode* root,int key){
    if(!root||root->data==key){
        return root;
    }
    if(key>root->data){
        return search(root->right,key);
    }
    else
        return search(root->left,key);
}

bool is_valid(TreeNode *root,int min,int max){
    if(!root)
        return true;
    if(root->data<min||root->data>max){
        return false;
    }
    if(is_valid(root->left,min,root->data)){
        if(is_valid(root->right,root->data,max)){
            return true;
        }
        else
            return false;
    }
    else{
        return false;
    }
}

int main(){
    BinaryTree bt;
    bt.assign_root(new TreeNode(5));
    TreeNode* root=bt.return_root();
    insert(root,9);
    insert(root,2);
    insert(root,3);
    insert(root,0);
    insert(root,4);
    insert(root,7);
    insert(root,11);
    levelorder(root);
    if(search(root,0)){
        cout<<"Yes\n";
    }
    if(search(root,99)){
        cout<<"Yes\n";
    }
    else
        cout<<"No\n";
    cout<<is_valid(root,1-__INT32_MAX__,__INT32_MAX__)<<endl;
}