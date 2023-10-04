#include <bits/stdc++.h>
using namespace std; 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int x = edges[i][1];
        adj[u].push_back(x);
    }
    //find all indgrees
    vector<int> indgree(v);
    for(auto i:adj){
        for(auto j:i.second){
            indgree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indgree[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        //ans store
        ans.push_back(front);
        //neighbour indgree update
        for(auto neighbour : adj[front]){
            indgree[neighbour]--;
            if(indgree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}
int main(){
    return 0;
}