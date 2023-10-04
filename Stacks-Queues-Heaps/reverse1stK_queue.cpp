#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> &q, int k){
    stack<int> s;
    int n = q.size();
    //adding elements to the stack
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    //adding elements at the back of queue in reverse order
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    //adding remaining at their correct positions in the queue
    for(int i=0;i<n-k;i++){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }
    return q;
}
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}