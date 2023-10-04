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
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while (fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
void twoHalves(Node* head){
    Node* mid = findMiddle(head);
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;
    Node* firstHalf = new Node(-1);
    Node* temp = firstHalf;
    Node* secondHalf = new Node(-1);
    Node* temp2 = secondHalf;
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;   
    }
    firstHalf = firstHalf -> next;
    while(right != NULL){
        temp2 -> next = right;
        temp2 = right;
        right = right -> next;  
    }
    secondHalf = secondHalf -> next;
    Print(firstHalf);
    Print(secondHalf);
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
    twoHalves(head);
    return 0;
}