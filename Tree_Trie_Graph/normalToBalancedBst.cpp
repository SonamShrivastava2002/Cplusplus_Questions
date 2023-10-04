#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Following is the Binary Serach Tree node structure
template <typename T>
class TreeNode
{
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
        if (left)
            delete left;
        if (right)
            delete right;
    }
};
void inorderStore(TreeNode<int>* root,vector<int> &in){
    if(root == NULL){
        return;
    }
    inorderStore(root -> left,in);
    in.push_back(root -> data);
    inorderStore(root -> right,in);
}
TreeNode<int>* buildBinary(int s,int e,vector<int> &in){
    //base case
    if(s>e){
        return NULL;
    }
    int mid = s+(e-s)/2;
    int midEle = in[mid];
    TreeNode<int>* curr = new TreeNode<int>(midEle);
    curr -> left = buildBinary(s,mid-1,in);
    curr -> right = buildBinary(mid+1,e,in);
    return curr;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> in;
    inorderStore(root,in);
    int s=0,e = in.size()-1;
    TreeNode<int>* head = buildBinary(s,e,in);
    return head;
}
