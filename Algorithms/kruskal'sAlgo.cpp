#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b){
    return a[2]<b[2];
}
void makeSet(vector<int> &parent,vector<int> &rank,int n){
    for(int i=0;i<n;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}
int findParent(vector<int> &parent,int node){
    if(parent[node] == node){
        return node;
    }
    //path compression
    return parent[node] = findParent(parent,parent[node]);
}
void unionSet(int u,int v,vector<int> &parent,vector<int> &rank){
    u = findParent(parent,u);
    v = findParent(parent,v);
    if(rank[u] < rank[v]){
        parent[u] = v;
    }
    else if(rank[v] < rank[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }
}
int minimumSpanningTree(vector<vector<int>>& edges, int n){  
    sort(edges.begin(),edges.end(),cmp);
    vector<int> parent(n);
    vector<int> rank(n);
}
int main(){
    return 0;
}