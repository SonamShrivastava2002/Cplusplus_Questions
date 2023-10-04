#include <bits/stdc++.h> 
using namespace std;
//Following is the Binary Tree node structure
template <typename T>
class TreeNode {
    public :
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode() {
        if(left)
            delete left;
        if(right)
            delete right;
    }
};
void inorderStore(TreeNode<int>* root,vector<TreeNode<int>> &in){
    if(root == NULL){
        return;
    }
    inorderStore(root -> left,in);
    in.push_back(root -> data);
    inorderStore(root -> right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root){
    vector<TreeNode<int>> in;
    inorderStore(root,in);
    TreeNode<int>* head = new TreeNode<int>(in[0]);
    TreeNode<int>* curr = head;
    int i=1;
    while(i<in.size()){
        TreeNode<int>* newNode = new TreeNode<int>(in[i]);
        curr -> left = NULL;
        curr -> right = newNode;
        curr = newNode;
        i++;
    }
    curr -> left = NULL;
    curr -> right = NULL;
    return head;
}
