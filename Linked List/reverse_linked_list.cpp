#include <iostream>
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
Node* reverseList(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main(){
    //created new node
    Node* node1 = new Node(17);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //head pointed to node1
    Node* head = node1;
    InsertAtHead(head,12);
    Print(head);
    
    InsertAtHead(head,15);
    Print(head);
    
    InsertAtHead(head,20);
    Print(head); 

    Node* newnode = reverseList(head);
    Print(newnode);
    return 0;
}