#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s,int cnt,int n){
    if(cnt == n/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,cnt+1,n);
    s.push(num);
}
int main(){
    stack<int> s;
    int n = 4;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(49);
    for (int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(49);
    int cnt = 0;
    solve(s,cnt,n);
    for (int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}