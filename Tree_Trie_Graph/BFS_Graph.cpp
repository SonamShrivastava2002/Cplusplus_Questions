#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &adj,vector<bool> &visited,vector<int> &ans,int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        //store frontNode into ans
        ans.push_back(frontNode);
        //traverse all neighours of frontNode
        for(auto i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    vector<bool> visited(n,false);
    //traverse all components of a graph
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(adj,visited,ans,i);
        }
    }
    return ans;
}
int main(){
    return 0;
}