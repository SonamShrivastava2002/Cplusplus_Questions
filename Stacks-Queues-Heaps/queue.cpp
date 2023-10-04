#include <bits/stdc++.h>
using namespace std;
int main(){
    //creating a queue
    queue<int> q;
    q.push(15);
    q.push(40);
    q.push(26);
    cout<<"At Front:"<<q.front()<<endl;
    q.push(28);
    cout<<"Size:"<<q.size()<<endl;
    q.pop();
    cout<<"Size:"<<q.size()<<endl;
    //empty or not
    queue<int> q2;
    if(q2.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    return 0;
}