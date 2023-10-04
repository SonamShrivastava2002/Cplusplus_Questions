#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    vector<vector<int>> adj_Matrix;
    int nodes;
    graph(int n){
        this -> nodes = n;
        for(int i=0;i<n;i++){
            vector<int> row(n,0);
            adj_Matrix.push_back(row);
        }
    }
    void addEdge(int x,int y){
        adj_Matrix[x][y] = 1;
    }
    void prtAdj(){
        for(int i=0;i<nodes;i++){
            for(int j=0;j<nodes;j++){
                cout<<adj_Matrix[i][j];
            }
            cout<<endl;
        }
    }
};
int main(){
    int n = 3;
    cout<<"Nodes:";
    cin>>n;
    int m;
    cout<<"Edges:";
    cin>>m;
    graph g(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v);
        
    }
    //printing
    g.prtAdj();
    return 0;
}