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
};
void InsertAtHead(Node* &head,int d){
    //new node created
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void InsertAtTail(Node* &tail,int d){
    //new node created
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void InsertAtMiddle(int position,Node* &head,Node* &tail,int d){
    //insert at start
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }
    //inserting at last position
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* node_to_insert = new Node(d);
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}
int main(){
    //created new node
    Node* node1 = new Node(17);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    Print(head);
    
    InsertAtHead(head,12);
    Print(head);
    
    InsertAtTail(tail,15);
    Print(head);
    
    InsertAtMiddle(4,head,tail,20);
    Print(head); 
    
    cout<<"HEAD:"<<head->data<<endl;
    cout<<"TAIL:"<<tail->data<<endl;

    if(detectLoop(head)){
        cout<<"Loop present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
    return 0;
}