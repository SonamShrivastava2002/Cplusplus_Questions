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
Node* kReverse(Node* head,int n){
    if(head == NULL){
        return NULL;
    }
    //step1: reverse first k nodes
    Node* pre = NULL;
    Node* curr = head;
    Node* nest = NULL;
    int cnt = 0;
    while(curr != NULL && cnt<n){
        nest = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = nest;
        cnt++;
    }
    //step2: Recursion dekhlega aange
    if(nest!=NULL){
        head -> next = kReverse(nest,n);
    }
    //step3 : return head of reversed list
    return pre;
}
int main(){
    Node* node1 = new Node(17);
    Node* head = node1;
    InsertAtHead(head,12);
    Print(head);
    
    InsertAtHead(head,15);
    Print(head);
    
    InsertAtHead(head,20);
    Print(head); 
    
    Node* newNode = kReverse(head,2);
    Print(newNode);
    return 0;
}