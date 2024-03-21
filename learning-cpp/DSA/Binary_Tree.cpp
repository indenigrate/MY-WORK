#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class TreeNode{
public:    
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode():data(0),left(nullptr),right(nullptr){};
    TreeNode(const int &val):data(val),left(nullptr),right(nullptr){};
};

class BinaryTree{
    TreeNode *root;
public:
    BinaryTree():root(nullptr){};
    TreeNode* return_root(){
        return root;
    }
    void assign_root(TreeNode *root){
        this->root=root;
    }
    //Recursive preorder traversal
    void PreOrder(TreeNode *root){
        if(!root){
            return;
        }
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    //Iterative preorder traversal
    void Iterative_PreOrder(TreeNode *root){
        if(!root)
            return;
        stack <TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode *temp=st.top();
            st.pop();
            cout<<temp->data<<" ";
            if(temp->right){
                st.push(temp->right);
            } 
            if(temp->left){
                st.push(temp->left);
            }

        }
        cout<<endl;
    }
    //Recursive inorder traversal
    void InOrder(TreeNode *root){
        if(!root)
            return;
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
    //Iterative inorder traversal
    //do iterative again
    void Iterative_InOrder(TreeNode *root){
        if(!root)
            return;
        stack <TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode *temp=stack.top();
            stack.pop();
            stack.push(root->right);

            stack.push(root->left);
        }
    }
    //Recursive postorder traversal
    void PostOrder(TreeNode*root){
        if(!root)
            return;
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
    //Level Order Traversal
    void LevelOrderTraversal(TreeNode *root){
        queue<TreeNode*>q;
        if(!root)
            return;
        q.push(root);
        while(!q.empty()){
            cout<<q.front()->data<<" ";
            TreeNode *temp=q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    int max_value(TreeNode *root){
        if(!root)
            return 0;
        int left=max_value(root->left);
        int right=max_value(root->right);
        int result=root->data;
        if(result<left)
            result=left;
        if(result<right)
            result=right;
        return result;
    }
};

int main(){
    TreeNode *first=new TreeNode(1);
    TreeNode *second=new TreeNode(2);
    TreeNode *third=new TreeNode(3);
    TreeNode *fourth=new TreeNode(4);
    TreeNode *fifth=new TreeNode(5);
    TreeNode *sixth=new TreeNode(6);
    TreeNode *seven=new TreeNode(7);

    BinaryTree bt;
    bt.assign_root(first);
    first->left=second;
    first->right=third;
    second->left=fourth;
    second->right=fifth;
    third->right=seven;
    third->left=sixth;

    cout<<"Recursive preorder\n";
    bt.PreOrder(bt.return_root());

    cout<<"\nIterative preorder\n";
    bt.Iterative_PreOrder(bt.return_root());

    cout<<"Recursive inorder\n";
    bt.InOrder(bt.return_root());
    cout<<endl;
    cout<<"Recursive postorder\n";
    bt.PostOrder(bt.return_root());
    cout<<endl;
    cout<<"Level Order traversal\n";
    bt.LevelOrderTraversal(bt.return_root());
    cout<<endl;
    cout<<bt.max_value(bt.return_root())<<endl;
}