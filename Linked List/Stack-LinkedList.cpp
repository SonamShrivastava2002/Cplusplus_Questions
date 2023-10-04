#include<bits/stdc++.h>
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
class Stack{
    public:
        Node* top;
        Stack(){
            top = NULL;
        }
        void push(int data){
            //if linked list is empty
            Node* head = new Node(data);
            if(!head){
                cout<<"Stack Overflow"<<endl;
            }
            head -> data = data;
            head -> next = top;
            top = head;
        }
        int pop(){
            Node* temp = top;
            top = top -> next;
            temp -> next = NULL;
            delete temp;
        }
        bool isEmpty(){
            if(top == NULL){
                return true;
            }
            else{
                return false;
            }
        }
        int peek(){
            if(isEmpty()){
                return -1;
            }
            else{
                int temp = top -> data;
                return temp;
            }
        }
};
int main(){
    Stack st;
    st.push(82);
    st.push(18);
    st.push(40);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Non-empty"<<endl;
    }
    return 0;
}