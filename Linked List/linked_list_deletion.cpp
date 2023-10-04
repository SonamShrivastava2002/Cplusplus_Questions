#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this -> next = NULL;
        }
        ~Node(){
            int value = this -> data;
            //memory free
            if(this -> next != NULL){
                this->next = NULL;
                delete next;
                
            }
            cout<<"Memory is free for node with data : "<<value<<endl;
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
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free of start node
        //temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* pre = NULL;
        int cnt = 1;
        while(cnt<position){
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        pre -> next = curr -> next;
        //curr -> next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(17);
    Node* head = node1;
    InsertAtHead(head,12);
    InsertAtHead(head,15);
    InsertAtHead(head,20);
    Print(head);

    deleteNode(4,head);
    Print(head);
    return 0;
}