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
Node* merge(Node* left,Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;   
    }
    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;  
    }
    ans = ans -> next;
    return ans;
}
Node* mergeSort(Node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    //break linked ,ist into 2 halves,after finding mid 
    Node* mid = findMiddle(head);
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    //merge both left and right halves
    Node* result = merge(left,right);
    return result;
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
    Node* new_head = mergeSort(head);
    Print(new_head);
    return 0;
}