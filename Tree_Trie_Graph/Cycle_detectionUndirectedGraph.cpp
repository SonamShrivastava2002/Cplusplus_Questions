#include <bits/stdc++.h>
using namespace std;
//using BFS
bool isCyclicBFS(int i,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj){
    unordered_map<int,int> parent;
    parent[i] = -1;
    visited[i] = 1;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto neighbour : adj[front]){
            if(visited[neighbour] == true && neighbour != parent[front]){
                return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }
        }
    }
    return false; 
}
//using DFS
bool isCycleDFS(int node,int parent,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj){
    visited[node] = true;
    for(auto j:adj[node]){
        if(!visited[j]){
            bool cycle = isCycleDFS(j,node,visited,adj);
            if(cycle){
                return true;
            }
        }
        else if(j != parent){
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m){
    //create adjacency list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //to handle disconnected componenets
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            //bool ans = isCyclicBFS(i,visited,adj);
            bool ans = isCycleDFS(i,-1,visited,adj);
            if(ans){
                return "Yes";
            }
        }
    }
    return "No";
}
int main(){
    return 0;
}