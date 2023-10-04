#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
//approach 1 - using queue
//approach 2 - using stack
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int> p;
        int n = q.size();
        vector<int> v;
        //new queue with first n/2 elements
        for (int i=0;i<(n/2);i++){
            p.push(q.front());
            q.pop();
        }
        while(!p.empty()){
            v.push_back(p.front());
            p.pop();
            int ele = q.front();
            q.pop();
            v.push_back(ele);
        }
        return v;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
