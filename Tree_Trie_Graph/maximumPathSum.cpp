#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;
    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);
    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();
        // Get the current Node's value from the string
        string currVal = ip[i];
        // If the left child is not null
        if (currVal != "N") {
            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
            // Push it to the queue
            queue.push(currNode->left);
        }
        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        // If the right child is not null
        if (currVal != "N") {
            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int solve(Node* root,int &res){
        if(root == NULL){
            return 0;
        }
        int l = solve(root -> left,res);
        int r = solve(root -> right,res);
        int temp = max(max(l,r) + root -> data,root -> data);
        int ans = max(temp,l + r + (root->data));
        res = max(res,ans);
        return temp;
    }
    int findMaxSum(Node* root){
        int res = INT_MIN;
        int u = solve(root,res);
        return res;
    }
};
int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        cout << ob.findMaxSum(root) << "\n";
    }
    return 0;
}