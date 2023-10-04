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
Node* getMiddle(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
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
    
    Node* newNode = getMiddle(head);
    cout<<newNode -> data<<endl;
    return 0;
}