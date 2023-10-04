#include<bits/stdc++.h>
using namespace std;
class SpecialStack {
    stack<int> s;
    int mini;
    public:
    void push(int data) {
        // Implement the push() function.
        //for first element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                s.push(2*data - mini);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }
    void pop() {
        // Implement the pop() function.
        if(s.empty()){
            return;
        }
        int curr = s.top();
        if(curr > mini){
            s.pop();
        }
        else{
            int preMin = mini;
            int val = 2*mini - curr;
            mini = val;
            s.pop();
        }
    }
    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }
    /*bool isEmpty(){
        return s.empty();
    }*/
    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};
int main(){

    return 0;
}