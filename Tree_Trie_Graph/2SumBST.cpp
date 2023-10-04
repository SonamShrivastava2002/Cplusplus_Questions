#include <bits/stdc++.h> 
using namespace std;
//Following is the Binary Tree node structure
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
void inorderStore(BinaryTreeNode<int>* root,vector<int> &in){
    if(root == NULL){
        return;
    }
    inorderStore(root -> left,in);
    in.push_back(root -> data);
    inorderStore(root -> right,in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target){
    vector<int> inorderSet;
    inorderStore(root,inorderSet);
    int i=0,j=inorderSet.size();
    while(i<j && inorderSet[i] + inorderSet[j] != target){
        if(inorderSet[i] + inorderSet[j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    if(i<j){
        return true;
    }
    else{
        return false;
    }
}