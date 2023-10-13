//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution{
private:
public:
    void Store(vector<int> &ans,Node* curr,int k,Node* block){
        if(k<0 || curr == NULL || (block != NULL && curr == block)){
            return;
        }
        if(k == 0){
            ans.push_back(curr -> data);
        }
        
        Store(ans,curr -> left,k-1,block);
        Store(ans,curr -> right,k-1,block);
    }
    bool findPath(vector<Node*> &path,int target,Node* root){
        if(root == NULL){
            return false;
        }
        if(root -> data == target || findPath(path,target,root -> left) || findPath(path,target,root -> right)){
            path.push_back(root);
            return true;
        }
        return false;
    }
    vector <int> KDistanceNodes(Node* root, int target , int k){
        // return the sorted vector of all nodes at k dist
        vector<int> ans;
        vector<Node*> path;
        findPath(path,target,root);
        for(int i=0;i<path.size();i++){
            Store(ans,path[i],k-i,i==0 ? NULL : path[i-1]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    getchar();
    Solution x = Solution();
    while(t--){
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        int target, k;
        cin>> target >> k;
        getchar();
        vector <int> res = x.KDistanceNodes(head, target, k);
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}