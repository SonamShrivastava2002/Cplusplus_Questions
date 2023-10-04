#include <bits/stdc++.h>
using namespace std;
void BottomElement(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int num = s.top();
    s.pop();
    BottomElement(s,n);
    s.push(num);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(49);
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
    int n;
    cin>>n;
    BottomElement(s,n);
    for (int i=0;i<=m;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}