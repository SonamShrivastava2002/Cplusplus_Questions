//gfg que : clone a linked list with next and random pointer
/*Main Function

void insertAtTail(Node* &head,Node* &tail,int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}
//space complexity = O(n)
Node* copyList(Node* head){
    //create an empty clone list
    Node* clonehead = NULL;
    Node* clonetail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(clonehead,clonetail,temp -> data);
        temp = temp -> next;
    }
    //create a map
    unordered_map<Node*,Node*> oldToNew;
    temp = head;
    Node* clone = clonehead;
    while(temp != NULL && clone != NULL){
        oldToNew[temp] = clone;
        temp = temp -> next;
        clone = clone -> next;
    }
    temp = head;
    clone = clonehead;
    while(temp != NULL){
        clone -> arb = oldToNew[temp -> arb];
        temp = temp -> next;
        clone = clone -> next;
    }
    return clonehead;
}
//space complexity - O(1)
Node* copyList(Node* head){
    //create an empty clone list
    Node* clonehead = NULL;
    Node* clonetail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(clonehead,clonetail,temp -> data);
        temp = temp -> next;
    }
    //clone nodes add in between original list
    Node* curr = head;
    Node* clonecurr = clonehead;
    while(curr != NULL && clonecurr != NULL){
        Node* newn = curr -> next;
        curr -> next = clonecurr;
        curr = newn;
        newn = clonecurr -> next;
        clonecurr -> next = curr;
        clonecurr = next;
    }
    //random pointer copy
    curr = head;
    while(curr != NULL){
        if(curr -> next != NULL){
            if(curr -> arb != NULL){
                curr -> next -> arb = curr -> arb -> next;
            }
        }
        curr = curr -> next -> next;
    }
    //revert back changes
    curr = head;
    clonecurr = clonehead;
    while(curr != NULL && clonecurr != NULL){
        curr -> next = clonecurr -> next;
        curr = curr -> next;
        if(curr != NULL){
            clonecurr -> next = curr -> next;
        }
        clonecurr = clonecurr -> next;
    }
    return clonehead;
}
*/