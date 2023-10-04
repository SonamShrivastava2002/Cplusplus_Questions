#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> m){
    if((x>=0 && x<n) && 
        (y>=0 && y<n) &&
        (visited[x][y] == 0) &&
        (m[x][y] == 1)){
            return true;
    }
    else{
        return false;
    }
}
void Solve(vector<vector<int>> m,int n,vector<string>& ans,int x,int y,
            vector<vector<int>> visited,string path){
    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        Solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //left
    newx = x;
    newy = y-1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        Solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //right
    newx = x;
    newy = y+1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        Solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //up
    newx = x-1;
    newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        Solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    visited[x][y] = 0;
}
int main(){
    vector<vector<int>> m = {{0,0,0,0},
                            {1,1,0,1},
                            {1,1,0,0},
                            {0,1,1,1}};
    int n=4;
    vector<string> ans;
    if(m[0][0] == 0){
        for (int i=0;i<ans.size();i++){
            for (int j=0;j<ans[i].length();j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    int srcx = 0;
    int srcy = 0;
    vector<vector<int>> visited = m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    string path="";
    Solve(m,n,ans,srcx,srcy,visited,path);
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}