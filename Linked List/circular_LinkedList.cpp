#include <iostream>
#include <map>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int d){
            this -> data = d;
            this -> next = NULL;
        }
        ~Node(){
            int value = this -> data;
            if(this -> next != NULL){
                next = NULL;
                delete next;
            }
            cout<<"Memory is free for node with data : "<<value<<endl;

        }
};
void insertNode(Node* &tail,int element,int d){
    //if it is an empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //non-empty linked list
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr->next;
        }
        //current element found
        Node* temp = new Node(d);
        temp-> next = curr -> next;
        curr -> next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"NULL"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}
/*void deleting(Node* &tail,int k){
    //if list is empty
    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        //assuming the k is present inthe list
        Node* pre = tail;
        Node* curr = pre ->next;
        while(curr->data != k){
            pre = curr;
            curr = curr -> next;
        }
        pre -> next = curr -> next;
        //if the list is single node
        if(curr == pre){
            tail = NULL;
        }
        if(tail == curr){
            tail = pre;
        }
        delete curr;
    }
}*/
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp]==true){
            return false;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return true;
}
Node* detectLoopFloyd(Node* head){
    // your code here
    if(head -> next == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && slow != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(fast == slow){
            //cout<<"Psesnt at"<<slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* getStart(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersect = detectLoopFloyd(head);
    Node* slow = head;
    while(slow!=intersect){
        slow = slow -> next;
        intersect = intersect -> next;
    }
    return slow;
}
void removeloop(Node* head){
    if(head == NULL){
        return ;
    }
    Node* start = getStart(head);
    Node* temp = start;
    while(temp -> next != start){
        temp = temp -> next;
    }
    temp -> next = NULL;
}
int main(){
    Node* tail = NULL;
    //inserting in empty list
    insertNode(tail,5,3);
    //print(tail);

    insertNode(tail,3,5);
    //print(tail);

    insertNode(tail,5,18);
    //print(tail);

    insertNode(tail,5,8);
    //print(tail);

    insertNode(tail,18,2);
    print(tail);

    //deleting(tail,3);
    //print(tail);
    Node* loop = getStart(tail);
    cout<<loop -> data<<endl;
    removeloop(tail);
    print(tail);
    return 0;
} 