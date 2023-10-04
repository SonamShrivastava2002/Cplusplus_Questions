#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Sonam");
    s.push("Simmi");
    s.push("Shrivastava");
    cout<<"Size:"<<s.size()<<endl;
    cout<<"Top Element:"<<s.top()<<endl;
    s.pop();
    cout<<"Size:"<<s.size()<<endl;
    cout<<"Top Element:"<<s.top()<<endl;
    cout<<"empty or not:"<<s.empty()<<endl;
    return 0;
}