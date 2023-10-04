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
Node* uniqueElements(Node* head){
    if(head == NULL){
        return NULL;
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
    Node* node1 = new Node(17);
    Node* head = node1;
    InsertAtHead(head,15);
    InsertAtHead(head,12);
    InsertAtHead(head,12);
    InsertAtHead(head,9);
    Print(head);
    Node* new_head = uniqueElements(head);
    Print(new_head);
    return 0;
}