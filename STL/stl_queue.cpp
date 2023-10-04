#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Sonam");
    q.push("Simmi");
    q.push("Shrivastava");
    cout<<"Size:"<<q.size()<<endl;
    cout<<"first element:"<<q.front()<<endl;
    q.pop();
    cout<<"first element:"<<q.front()<<endl;
    cout<<"Size:"<<q.size()<<endl;
    return 0;
}