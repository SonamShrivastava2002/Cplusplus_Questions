#include <iostream>
#include <map>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
        //destructor
        ~Node(){
            int value = this -> data;
            //memory free
            if(this -> next != NULL){
                this->next = NULL;
                delete next;
                
            }
        }
};
void InsertAtHead(Node* &head,int d){
    //new node created
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
//using map
/*Node* removeDuplicate(Node* &head){
    if(head == NULL){
        return NULL;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    Node* pre = NULL;
    while(temp != NULL){
        if(visited[temp]==true){
            Node* next_next = temp -> next;
            Node* del = temp;
            delete(del);
            pre -> next = next_next;
            temp = next_next;
        }
        else{
            visited[temp] = true;
            pre = temp;
            temp = temp -> next;
        }
    }
    return head;
}*/
//using 2 loops
/*Node* removeDuplicate(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* curr = head;
    
    while(curr!=NULL){
        Node* curr_next = curr->next;
        Node* pre = curr;
        while(curr_next!=NULL){
            if(curr -> data == curr_next -> data){
                Node* del = curr_next;
                curr_next = curr_next -> next;
                pre -> next = curr_next;
                //del -> next = NULL;
                delete del;
            }
            else{
                pre = curr_next;
                curr_next = curr_next -> next;
            }
        }
        curr = curr -> next;
        //curr_next = curr -> next;
        //pre = curr;
    }
    return head;
}*/
//using sorting(merge sort) and then applying remove algo to sorted linked list
//Give a linked list in sorted and duplicates removed
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while (fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
Node* merge(Node* left,Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;   
    }
    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;  
    }
    ans = ans -> next;
    return ans;
}
Node* mergeSort(Node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    //break linked ,ist into 2 halves,after finding mid 
    Node* mid = findMiddle(head);
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    //merge both left and right halves
    Node* result = merge(left,right);
    return result;
}
Node* removeDuplicate(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node*curr = head;
    while(curr != NULL){
        if((curr -> next != NULL) && (curr -> data == curr -> next -> data)){
            Node* next_next = curr -> next -> next;
            Node* del = curr -> next;
            delete(del);
            curr -> next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}
int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    InsertAtHead(head,2);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    InsertAtHead(head,2);
    InsertAtHead(head,4);
    Print(head);
    Node* new_head = mergeSort(head);
    Node* ans = removeDuplicate(new_head);
    Print(ans);
    return 0;
}