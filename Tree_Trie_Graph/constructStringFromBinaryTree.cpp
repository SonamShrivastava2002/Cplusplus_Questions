#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void preOrder(string &s,TreeNode* root){
        if(root == NULL){
            return;
        }
        s += to_string(root -> val);
        if(root->left != NULL || root->right != NULL){
            s.push_back('(');
            preOrder(s,root -> left);
            s.push_back(')');
        }
        if(root -> right != NULL){
            s.push_back('(');
            preOrder(s,root -> right);
            s.push_back(')');
        }
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        preOrder(ans,root);
        return ans;
    }
};
int main(){

}