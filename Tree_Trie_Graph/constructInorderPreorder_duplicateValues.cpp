#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *left;
	struct Node *right;	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};
void printPostOrder(Node *root){
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n){
        set<Node*> s;
        stack<Node*> st;
        Node* root = NULL;
        for (int p = 0, i = 0; p < n;){
            Node* node = NULL;
            do{
                node = new Node(pre[p]);
                if (root == NULL){
                    root = node;
                }
                if (st.size() > 0){
                    if (s.find(st.top()) != s.end()){
                        s.erase(st.top());
                        st.top()->right = node;
                        st.pop();
                    }
                    else{
                        st.top()->left = node;
                    }
                }
                st.push(node);
            } while (pre[p++] != in[i] && p < n);
            node = NULL;
            while (st.size() > 0 && i < n && st.top()->data == in[i]){
                node = st.top();
                st.pop();
                i++;
            }
            if (node != NULL){
                s.insert(node);
                st.push(node);
            }
        }
        return root;
    }
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}