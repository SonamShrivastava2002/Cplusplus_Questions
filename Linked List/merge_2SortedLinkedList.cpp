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
Node* Solve(Node* first,Node* second){
    Node* pre = first;
    Node* curr = first -> next;
    Node* temp = second;
    while(temp != NULL && curr != NULL){
        if(temp -> data <= curr -> data){
            pre -> next = temp;
            pre = pre -> next;
            temp = temp -> next;
            pre -> next = curr;
            //curr = curr -> next;
        }
        else{
            pre = pre -> next;
            curr = curr -> next;
        }
    }
    if(temp != NULL){
        pre -> next = temp;
        return first;
    }
    return first;
}
Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    if(first -> data <= second -> data){
        Solve(first,second);
    }
    else{
        Solve(second,first);
    }
}
int main(){
    Node* node1 = new Node(8);
    Node* first = node1;
    InsertAtHead(first,5);
    InsertAtHead(first,4);
    InsertAtHead(first,1);
    Node* node2 = new Node(10);
    Node* second = node2;
    InsertAtHead(second,9);
    InsertAtHead(second,5);
    InsertAtHead(second,3);
    Print(first);
    Print(second);
    Node* new_node = sortTwoLists(first,second);
    Print(new_node);
    return 0;
}