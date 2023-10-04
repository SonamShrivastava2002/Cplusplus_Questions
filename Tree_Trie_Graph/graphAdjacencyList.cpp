#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T,list<T>> adj;
    void addEdge(T u,T v,bool direction){
        //direction = 0 -> undirected;
        //direction = 1 -> directed;
        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    void printAdj(){
        for(auto it:adj){
            cout<<it.first<<"->";
            for(auto j:it.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Nodes:";
    cin>>n;
    int m;
    cout<<"Edges:";
    cin>>m;
    graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }
    //printing
    g.printAdj();
    return 0;
}