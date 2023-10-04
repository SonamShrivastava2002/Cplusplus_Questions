#include <bits/stdc++.h> 
using namespace std;
//Following is the Binary Tree node structure:

class BinaryTreeNode {
    
public :
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data) {
    this -> left = NULL;
    this -> right = NULL;
    this -> data = data;
    }
};
void inorderStore(BinaryTreeNode* root,vector<int> &in){
	if(root == NULL){
		return;
	}
	inorderStore(root->left,in);
	in.push_back(root -> data);
	inorderStore(root -> right,in);
}
void preorder(BinaryTreeNode* root,vector<int> &in,int &i){
	if(root == NULL){
		return;
	}
	root -> data = in[i++];
	preorder(root->left,in,i);
	preorder(root->right,in,i);
}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int> inorder;
	inorderStore(root,inorder);
	int i = 0;
    preorder(root,inorder,i);
    return root;
}