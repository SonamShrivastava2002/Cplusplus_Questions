#include <bits/stdc++.h>
using namespace  std;
//Following is Binary Tree Node structure:
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
info solve(TreeNode* root,int &ans){
    //base case
    if(root == NULL){
        return {INT32_MIN,INT32_MAX,true,0};
    }
    info left = solve(root -> left,ans);
    info right = solve(root -> right,ans);
    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root -> data,right.maxi);
    currNode.mini = min(root -> data,left.mini);
    if(left.isBST && right.isBST && (root -> data > left.maxi && root -> data < right.mini)){
        currNode.isBST = true;
    }
    else{
        currNode.isBST = false;
    }
    //answer update
    if(currNode.isBST){
        ans = max(ans,currNode.size);
    }
    return currNode;
}
int largestBST(TreeNode * root){
    int maxSize = 0;
    info temp = solve(root,maxSize);
    return maxSize;
}