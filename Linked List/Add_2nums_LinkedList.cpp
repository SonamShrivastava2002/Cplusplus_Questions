#include <iostream>
#include <bits/stdc++.h>
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
Node* reverse(Node* head){
    Node* curr = head;
    Node* pre = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}
void insertAtTail(Node* &head,Node* &tail,int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
}
//Approach-1
/*Node* add(Node* first,Node* second){
    int carry = 0;
    Node* anshead = NULL;
    Node* anstail = NULL;
    while(first != NULL && second != NULL){
        int sum = carry + first -> data + second -> data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        first = first -> next;
        second = second -> next;
    }
    while(first != NULL){
        int sum = carry + first -> data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        first = first -> next;
    }
    while(second != NULL){
        int sum = carry + second -> data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        second = second -> next;
    }
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
    }
    return anshead;
}*/
//More generic code
Node* add(Node* first,Node* second){
    int carry = 0;
    Node* anshead = NULL;
    Node* anstail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first -> data;
        }
        int val2 = 0;
        if(second != NULL){
            val2 = second -> data;
        }
        int sum = carry + val1 + val2;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        if(first != NULL){
            first = first -> next;
        }
        if(second != NULL){
            second = second -> next;
        }
    }
    return anshead;
}
Node* addTwoLists(Node* first,Node*second){
    first = reverse(first);
    second = reverse(second);
    Node* ans = add(first,second);
    ans = reverse(ans);
    return ans;
}
int main(){
    Node* node1 = new Node(5);
    Node* first = node1;
    InsertAtHead(first,4);
    //InsertAtHead(first,4);
    //InsertAtHead(first,1);
    Node* node2 = new Node(5);
    Node* second = node2;
    InsertAtHead(second,4);
    InsertAtHead(second,3);
    //InsertAtHead(second,3);
    Print(first);
    Print(second);
    Node* ans = addTwoLists(first,second);
    Print(ans);
    return 0;
}