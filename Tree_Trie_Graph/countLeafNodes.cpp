void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root -> left,count);
    //leaf node
    if(root -> left == NULL && root -> right == NULL){
        count++;
    }
    inorder(root -> right,count);
}