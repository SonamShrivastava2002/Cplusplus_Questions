#include <bits/stdc++.h>
using namespace std;
void topological(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,stack<int> &s){
    visited[node] = true;
    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            topological(neighbour,visited,adj,s);
        }
    }
    //imp
    s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int x = edges[i][1];
        adj[u].push_back(x);
    }
    //calling for dfs topological function 
    unordered_map<int,bool> visited;
    stack<int> s;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            topological(i,visited,adj,s);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
int main(){
    return 0;
}