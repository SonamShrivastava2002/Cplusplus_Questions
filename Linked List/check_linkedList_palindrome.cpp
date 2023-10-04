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
//making a new array space complexity O(n);
/*bool checkPalindrome(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool isPalindrome(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
}*/
//with space complexity O(1);
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL && fast != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
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
}
bool isPalindrome(Node* head){
    if(head -> next == NULL){
        return true;
    }
    //find middle
    Node* middle = getMid(head);
    //reversing the second half
    Node* temp = middle -> next;
    middle -> next = reverse(temp);
    //Compare both the halves
    Node* head1 = head;
    Node* head2 = middle -> next;
    while(head2 != NULL){
        if((head1 -> data) != (head2 -> data)){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    //again reverse - optional
    temp = middle -> next;
    middle -> next = reverse(temp);
    return true;
}
int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,2);
    InsertAtHead(head,0);
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    Print(head);
    if(isPalindrome(head)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}