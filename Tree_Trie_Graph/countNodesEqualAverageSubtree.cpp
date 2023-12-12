#include <bits/stdc++.h>
using namespace std;
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
    pair<int,int> average(TreeNode* root,int &ans){
        if(root == NULL){
            return {0,0};
        }
        auto l = average(root->left,ans);
        auto r = average(root->right,ans);
        int sum = l.second + r.second + root -> val;
        int cnt = l.first + r.first + 1;
        int avg = sum/cnt;
        if(avg == root -> val){
            ans++;
        }
        return {cnt,sum};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        average(root,ans);
        return ans;
    }
};