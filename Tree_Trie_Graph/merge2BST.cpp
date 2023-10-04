#include <bits/stdc++.h>
using namespace std;
//Following is the Binary Tree node structure:
template <typename T>
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
//TC - O(l1+l1);SC - O(l1+l2)
/*void inorderStore(vector<int> &in,TreeNode* root){
    if(root == NULL){
        return;
    }
    inorderStore(in,root -> left);
    in.push_back(root -> data);
    inorderStore(in,root -> right);
}
vector<int> merge(vector<int> in1,vector<int> in2){
    int l1 = in1.size();
    int l2 = in2.size();
    int i=0,j=0;
    vector<int> ans(l1+l2);
    while(i<l1 && j<l2){
        if(in1[i]<in2[j]){
            ans.push_back(in1[i]);
            i++;
        }
        else{
            ans.push_back(in2[j]);
            j++;
        }
    }
    while(i<l1){
        ans.push_back(in1[i]);
        i++;
    }
    while(j<l2){
        ans.push_back(in2[j]);
    }
    return ans;
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2){
    //store inorder
    vector<int> inorder1,inorder2;
    inorderStore(inorder1,root1);
    inorderStore(inorder2,root2);
    vector<int> inorder_merge = merge(inorder1,inorder2);
    return inorder_merge;
}*/
//TC - O(l1+l2);SC - O(h1+h2);
//converting BST to sorted DLL
void convertIntoSortedDLL(TreeNode<int>* root,TreeNode<int>* &head){
    //base case
    if(root == NULL){
        return;
    }
    convertIntoSortedDLL(root -> right,head);
    root -> right = head;
    if(head != NULL){
        head -> left = root;
    }
    head = root;
    convertIntoSortedDLL(root -> left,head);
}
//merge two linked list
TreeNode<int>* mergeLinkedList(TreeNode<int>* head1,TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;
    while(head1 != NULL && head2 != NULL){
        if(head1 -> data < head2 -> data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1 -> right;
            }
            else{
                tail -> right = head1;
                head1 -> left = tail;
                tail = head1;
                head1 = head1 -> right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2 -> right;
            }
            else{
                tail -> right = head2;
                head2 -> left = tail;
                tail = head2;
                head2 = head2 -> right;
            }
        }
    }
    while(head1 != NULL){
        tail -> right = head1;
        head1 -> left = tail;
        tail = head1;
        head1 = head1 -> right;
    }
    while(head2 != NULL){
        tail -> right = head2;
        head2 -> left = tail;
        tail = head2;
        head2 = head2 -> right;
    }
    return head;
}
//counting nodes
int countNodes(TreeNode<int>* head){
    int cnt = 0;
    TreeNode<int>* curr = head;
    while(curr != NULL){
        cnt++;
        curr = curr -> right;
    }
    return cnt;
}
//converting sorted DLL to BST
TreeNode<int>*sortedDLLToBST(TreeNode<int>* &head,int n){
    //base case 
    if(n <= 0 || head == NULL){
        return NULL;
    }
    TreeNode<int>* left = sortedDLLToBST(head,n/2);
    TreeNode<int>* root = head;
    root -> left = left;
    head = head -> right;
    root -> right = sortedDLLToBST(head,(n-(n/2)-1));
}
TreeNode<int>* mergeBST(TreeNode<int>* root1,TreeNode<int>* root2){
    TreeNode<int>* head1 = NULL;
    convertIntoSortedDLL(root1,head1);
    head1 -> left = NULL;
    TreeNode<int>* head2 = NULL;
    convertIntoSortedDLL(root2,head2);
    head2 -> left = NULL;
    TreeNode<int>* head = mergeLinkedList(head1,head2);
    int n = countNodes(head);
    TreeNode<int>* root = sortedDLLToBST(head,n);
    return root;
}