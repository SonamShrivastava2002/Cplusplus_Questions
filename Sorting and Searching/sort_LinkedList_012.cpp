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
//Replacing the data
/*Node* Sort012(Node* head){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0){
            count0++;
        }
        if(temp -> data == 1){
            count1++;
        }
        if(temp -> data == 2){
            count2++;
        }
        temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        while(count0>0){
            temp -> data = 0;
            count0--;
            temp = temp -> next;
        }
        while(count1>0){
            temp -> data = 1;
            count1--;
            temp = temp -> next;
        }
        while(count2>0){
            temp -> data = 2;
            count2--;
            temp = temp -> next;
        }
    }
    return head;
}*/
//without replacing the data
void insertAtTail(Node* &tail,Node* curr){
    tail -> next = curr;
    tail = curr;
}
Node* Sort012(Node* &head){
    Node* head0 = new Node(-1);
    Node* tail0 = head0;
    Node* head1 = new Node(-1);
    Node* tail1 = head1;
    Node* head2 = new Node(-1);
    Node* tail2 = head2;
    Node* curr = head;
    //creating separate list of 0,1,2
    while(curr != NULL){
        int value = curr -> data;
        if(value == 0){
            insertAtTail(tail0,curr);
        }
        else if(value == 1){
            insertAtTail(tail1,curr);
        }
        else if(value == 2){
            insertAtTail(tail2,curr);
        }
        curr = curr -> next;
    } 
    //merging 3 sublists
    //if 1s list is empty
    if(head1 -> next != NULL){
        tail0 -> next = head1 -> next;
    }
    else{
        tail0 -> next = head2 -> next;
    }
    tail1 -> next = head2 -> next;
    tail2 -> next = NULL;
    //setting for head
    head = head0 -> next;
    //deleting dummy nodes
    head0 -> next = NULL;
    head1 -> next = NULL;
    head2 -> next = NULL;
    delete(head0);
    delete(head1);
    delete(head2);

    return head;
}
int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,1);
    Print(head);
    Node* new_node = Sort012(head);
    Print(new_node);
    return 0;
}