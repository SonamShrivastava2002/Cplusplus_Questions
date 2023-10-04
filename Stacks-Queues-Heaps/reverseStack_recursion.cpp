#include <bits/stdc++.h>
using namespace std;
void BottomInsert(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int num = s.top();
    s.pop();
    BottomInsert(s,n);
    s.push(num);
}
void reverseRecursive(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    reverseRecursive(s);
    BottomInsert(s,num);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(49);
    s.push(16);
    int m = s.size();
    for (int i=0;i<m;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(49);
    s.push(16);
    reverseRecursive(s);
    for (int i=0;i<m;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}