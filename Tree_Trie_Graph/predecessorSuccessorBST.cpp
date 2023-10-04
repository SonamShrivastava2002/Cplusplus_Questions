#include <iostream>
using namespace std;
//Following is the Binary Tree node structure
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
pair<int, int> predecessorSuccessor(TreeNode *root, int key){
    TreeNode *temp = root;
    int pre = -1;
    int succ = -1;
    while (temp -> data != key){
        if(temp -> data > key){
            succ = temp -> data;
            temp = temp -> left;
        }
        else{
            pre = temp -> data;
            temp = temp -> right;
        }
    }
    //pre and succ
    //pre
    TreeNode *leftNode = temp -> left;
    while(leftNode != NULL){
        pre = leftNode -> data;
        leftNode = leftNode -> right;
    }
    //succ
    TreeNode *rightNode = temp -> right;
    while(rightNode != NULL){
        succ = rightNode -> data;
        rightNode = rightNode -> left;
    }
    pair<int,int> ans = make_pair(pre,succ);
    return ans;
}