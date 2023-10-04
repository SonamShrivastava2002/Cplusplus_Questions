#include <bits/stdc++.h>
using namespace std;
void dfs(int node,unordered_map<int,bool> &visited,stack<int> &st,unordered_map<int,list<int>> &adj){
    visited[node] = true;
    for(auto nbr:adj[node]){
        if(!visited[nbr]){
            dfs(nbr,visited,st,adj);
        }
    }
    //topo logic
    st.push(node);
}
void revDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj){
    visited[node] = true;
    for(auto nbr:adj[node]){
        if(!visited[nbr]){
            revDFS(nbr,visited,adj);
        }
    }
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges){
    //adj
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    //topo-sort
    stack<int> st;
    unordered_map<int,bool> visited;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,visited,st,adj);
        }
    }
    //create a transpose graph
    unordered_map<int,list<int>> transpose;
    for(int i=0;i<v;i++){
        visited[i] = 0;
        for(auto nbr:adj[i]){
            transpose[nbr].push_back(i);
        }
    }
    //dfs call suing above ordering
    int count = 0;
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!visited[top]){
            count++;
            revDFS(top,visited,transpose);
        }
    }
    return count;
}
int main(){
    return 0;
}