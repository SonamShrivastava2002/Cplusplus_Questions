#include <bits/stdc++.h> 
using namespace std;
void addSolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
bool isSafe(int r,int c,vector<vector<int>> &board,int n){
    //TC for this function is O(n),if we use hashmaps we can reduce it to O(1)
    int x = r;
    int y = c;
    //check for same row
    while(y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
    }
    //check for diagonals
    x = r;
    y = c;
    while(x >= 0 && y >= 0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
        x--;
    }
    //check for same column
    x = r;
    y = c;
    while(x < n){
        if(board[x][y] == 1){
            return false;
        }
        x++;
    }
    return true;
}
void solve(int c,vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    //base case
    if(c == n){
        addSolution(ans,board,n);
        return;
    }
    //solve 1 case ans rest recursion will take care
    for(int r=0;r<n;r++){
        if(isSafe(r,c,board,n)){
            //if placing the queen is safe
            board[r][c] = 1;
            solve(c+1,ans,board,n);
            //backtrack
            board[r][c] = 0;
        }
    }
}
vector<vector<int>> nQueens(int n){	
    vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
    solve(0,ans,board,n);
    return ans;
}