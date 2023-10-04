#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
//Structure of the node of the binary tree is as
struct Node {
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;
    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
        // Get the current node's value from the string
        string currVal = ip[i];
        // If the left child is not null
        if (currVal != "N") {
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
            // Push it to the queue
            queue.push(currNode->left);
        }
        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];
        // If the right child is not null
        if (currVal != "N") {
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
//User function Template for C++
class Solution{
    private:
    void levelOrderTraversal(Node* root,vector<int> &v){
        queue<Node*> q;
        if(root == NULL){
            return;
        }
        q.push(root);
        bool lTOr = true;  
        //q.push(NULL);
        int index = 0;
        while(!q.empty()){
            int s = q.size();
            for (int i=0;i<s;i++){
                Node* temp = q.front();
                q.pop();     
                if(!lTOr){
                    index = s - i - 1;
                    lTOr = true;
                }
                //cout<<temp -> data <<" ";
                else{
                    index = i;
                    lTOr = false;
                } 
                v[index] = temp -> data;
                if(temp -> left){
                    q.push(temp -> left);
                }
                if(temp -> right){
                    q.push(temp -> right);
                }
            }  
        }
    }
    //9 7 9 4 5 10 6 9 7
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root){
        vector<int> v;
        queue<Node*> q;
        if(root == NULL){
            return v;
        }
        q.push(root);
        bool lTOr = true;  
        //q.push(NULL);
        int index;
        while(!q.empty()){
            int s = q.size();
            vector<int> vo(s);
            for (int i=0;i<s;i++){
                Node* temp = q.front();
                q.pop();     
                if(!lTOr){
                    index = s - i - 1;
                }
                //cout<<temp -> data <<" ";
                else{
                    index = i;
                } 
                vo[index] = temp -> data;
                if(temp -> left){
                    q.push(temp -> left);
                }
                if(temp -> right){
                    q.push(temp -> right);
                }
            }
            lTOr = !lTOr;  
            for(auto i:vo){
                v.push_back(i);
            }
        }
        return v;
    }
};
int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        Node* root = buildTree(s);
        vector<int> ans;
        Solution ob;
        ans = ob.zigZagTraversal(root) ;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}