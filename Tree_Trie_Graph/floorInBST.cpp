//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
    void inorder(Node* root,vector<int> &v){
        if(root == NULL){
            return;
        }
        inorder(root -> left,v);
        v.push_back(root -> data);
        inorder(root -> right,v);
    }
    int floor(Node* root, int x) {
        vector<int> v;
        inorder(root,v);
        int n = v.size();
        int ans = -1;
        int diff = INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i] == x){
                ans = v[i];
                break;
            }
            else{
                if(abs(x-v[i]) < diff && v[i] < x){
                    ans = v[i];
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends