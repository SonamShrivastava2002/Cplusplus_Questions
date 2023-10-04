#include <bits/stdc++.h>
using namespace std;
//Following is the Binary Tree node structure:
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left, *right;
    BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
    BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
    BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
};
//TC - O(n),SC - O(n)
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL){
        return false;
    }
    if(root -> data == x){
        return true;
    }
    if(x < root -> data){
        searchInBST(root -> left,x);
    }
    else{
        searchInBST(root -> right,x);
    }
}
//TC - O(n),SC - O(1)
bool searchInBST(BinaryTreeNode<int> *root, int x){
    BinaryTreeNode<int> *temp = root;
    while(temp != NULL){
        if(temp -> data == x){
            return true;
        }
        if(temp -> data < x){
            temp = temp -> right;
        }
        else{
            temp = temp -> left;
        }
    }
    return false;
}