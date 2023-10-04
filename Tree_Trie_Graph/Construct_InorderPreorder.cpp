//when there are different values in the tree
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
    int findPosition(int in[],int n,int ele){
        for(int i=0;i<n;i++){
            if(in[i] == ele){
                return i;
            }
        }
        return -1;
    }
    void mappingIndex(int in[],int n,map<int,int> &IndexMapping){
        for(int i=0;i<n;i++){
            IndexMapping[in[i]] = i;
        }
    }
    Node* solve(int in[],int pre[],int n,int &index,int inorderStart,int inorderEnd,map<int,int> &IndexMapping){
        //base case
        if(index >= n || inorderStart > inorderEnd){
            return NULL;
        }
        int ele = pre[index++];
        Node* root = new Node(ele);
        //O(n)
        int position = IndexMapping[ele];
        IndexMapping.erase(ele);
        //O(n^2);
        //int position = findPosition(in,n,ele);
        root -> left = solve(in,pre,n,index,inorderStart,position-1,IndexMapping);
        root -> right = solve(in,pre,n,index,position+1,inorderEnd,IndexMapping);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n){
        int preOrder = 0;
        map<int,int> IndexMapping;
        mappingIndex(in,n,IndexMapping);
        Node* ans = solve(in,pre,n,preOrder,0,n-1,IndexMapping);
        return ans;
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