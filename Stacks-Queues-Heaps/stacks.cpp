#include <bits/stdc++.h>
using namespace std;
class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;
    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }    
        else{
            return false;
        }
    }
};
int main(){
    /*Stack st(6);
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
    }*/
    
    //creation of stck
    stack<int> s;
    //push
    s.push(3);
    s.push(6);
    //size
    cout<<"size of stack is:"<<s.size()<<endl;
    //pop
    s.pop();
    cout<<"Printing top element:"<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is non-empty"<<endl;
    }
    cout<<"size of stack is:"<<s.size()<<endl;
    
    return 0;
}