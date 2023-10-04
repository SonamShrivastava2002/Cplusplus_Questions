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
class Queue{
    public:
        Node* front;
        Node* rear;
        Queue(){
            front = NULL;
            rear = NULL;
        }
        void push(int data){
            Node* temp = new Node(data);
            if(rear == NULL){
                rear = front = temp;
                return;
            }
            rear -> next = temp;
            rear = temp;
        }
        int pop(){
            if(front == NULL){
                return -1;
            }
            Node* temp = front;
            front = front -> next;
            temp -> next = NULL;
            delete temp;
        }
        bool isEmpty(){
            if(front == NULL){
                return true;
            }
            return false;
        }
        int peek(){
            if(isEmpty()){
                return -1;
            }
            return front -> data;
        }

};
int main(){
    Queue st;
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