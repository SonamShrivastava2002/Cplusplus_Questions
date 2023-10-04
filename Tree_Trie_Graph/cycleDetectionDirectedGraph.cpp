#include <bits/stdc++.h>
using namespace  std;
//using DFS
bool checkCycle(int src,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited,unordered_map<int,list<int>> &adj){
    visited[src] = true;
    dfsVisited[src] = true;
    for(auto neighbour: adj[src]){
        if(!visited[neighbour]){
            bool cycle = checkCycle(neighbour,visited,dfsVisited,adj);
            if(cycle){
                return true;
            }
        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }
    dfsVisited[src] = false;
    return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges){
    //create adj list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
    }
    /*//call dfs for all components
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            bool cycleFound = checkCycle(i,visited,dfsVisited,adj);
            if(cycleFound){
                return 1;
            }
        }
    }*/
    //find all indgrees
    vector<int> indgree(n);
    for(auto i:adj){
        for(auto j:i.second){
            indgree[j]++;
        }
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indgree[i] == 0){
            q.push(i);
        }
    }
    int ans=0;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        //ans update
        ans++;
        //neighbour indgree update
        for(auto neighbour : adj[front]){
            indgree[neighbour]--;
            if(indgree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    if(ans == n){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    return 0;
}