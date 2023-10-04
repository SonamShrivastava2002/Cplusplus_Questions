#include <bits/stdc++.h>
using namespace std;
void SortInsert(stack<int> &s,int num){
    //base case
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    SortInsert(s,num);
    s.push(n);
}
void sortStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    //recursive call
    sortStack(s);
    SortInsert(s,num);
}
int main(){
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);
    int m = s.size();
    for (int i=0;i<m;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);
    sortStack(s);
    for (int i=0;i<m;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}