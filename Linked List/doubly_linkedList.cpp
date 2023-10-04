#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node*next;
        //constructor
        Node(int d){
            this-> data = d;
            this-> prev = NULL;
            this-> next = NULL;
        }
};
//traversing the linked list
void Print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//getting length of linked list
int length_list(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void InsertDoublyHead(Node* tail,Node* &head,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}
void InsertDoublyTail(Node* &head,Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}
void InsertDoublyPosition(Node* &tail,Node* head,int d,int pos){
    if(pos == 1){
        InsertDoublyHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp -> next;
        cnt++;
    }
    //inserting at last position
    if(temp -> next == NULL){
        InsertDoublyTail(head,tail,d);
        return;
    }
    Node* node_to_insert = new Node(d);
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;
    temp -> next -> prev = node_to_insert;
    node_to_insert -> prev = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Print(head);

    InsertDoublyHead(tail,head,19);
    Print(head);

    InsertDoublyHead(tail,head,12);
    Print(head);

    InsertDoublyHead(tail,head,18);
    Print(head);

    InsertDoublyHead(tail,head,3);
    Print(head);

    int l = length_list(head);
    cout<<l<<endl;

    InsertDoublyTail(head,tail,37);
    Print(head);

    InsertDoublyPosition(tail,head,26,1);
    Print(head);
    return 0;
}