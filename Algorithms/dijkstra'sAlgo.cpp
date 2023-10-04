#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source){
    //create adjacency list
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    //creation of set on basis(distance,node)
    set<pair<int,int>> s;
    //creation of distance array with infinite value intially
    vector<int> ans(vertices);
    for(int i=0;i<vertices;i++){
        ans[i] = INT_MAX;
    }
    //initialise distance and set with source node
    ans[source] = 0;
    s.insert(make_pair(0,source));
    while(!s.empty()){
        //fetch top record
        pair<int,int> p = *(s.begin());
        int nodeDis = p.first;
        int node = p.second;
        //remove top record now
        s.erase(s.begin());
        //traverse on neighbours
        for(auto neighbour:adj[node]){
            if(nodeDis + neighbour.second < ans[neighbour.first]){
                auto record = s.find(make_pair(ans[neighbour.first],neighbour.first));
                //if record found then erase it
                if(record != s.end()){
                    s.erase(record);
                }
                //distance update
                ans[neighbour.first] = nodeDis + neighbour.second;
                //record push in set
                s.insert(make_pair(ans[neighbour.first],neighbour.first));
            }
        }
    }
    return ans;
}
int main(){
    return 0;
}