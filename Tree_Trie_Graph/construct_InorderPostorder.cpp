/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;
    /* then print the data of node */
    printf("%d ", node->data);
    /* first recur on left child */
    preOrder(node->left);
    /* now recur on right child */
    preOrder(node->right);
}
Node* buildTree(int in[], int post[], int n);
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
void MappingIn(map<int,int> &indexMapping,int in[],int n){
    for(int i=0;i<n;i++){
        indexMapping[in[i]] = i;
    }
}
Node* postIn(int in[],int post[],int n,map<int,int> &indexMapping,int &postOrderIndex,int inorderStart,int inorderEnd){
    if(postOrderIndex < 0 || inorderStart > inorderEnd){
        return NULL;
    }
    int ele = post[postOrderIndex--];
    Node* root = new Node(ele);
    int position = indexMapping[ele];
    root -> right = postIn(in,post,n,indexMapping,postOrderIndex,position + 1,inorderEnd);
    root -> left = postIn(in,post,n,indexMapping,postOrderIndex,inorderStart,position - 1);
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    map<int,int> indexMapping;
    int postOrderIndex = n-1;
    Node* ans = postIn(in,post,n,indexMapping,postOrderIndex,0,n-1);
    return ans;
}
