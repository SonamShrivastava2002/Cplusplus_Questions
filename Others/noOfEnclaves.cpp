//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bfs(vector<vector<int>> &grid,int row,int col,vector<vector<int>> &visited){
        queue<pair<int,int>> q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==0 || j==0 || i==row-1 || j==col-1){
                    if(grid[i][j] == 1){
                        q.push(make_pair(i,j));
                        visited[i][j] = 1;
                    }
                }
            }
        }
        int r[] = {-1,0,1,0};
        int c[] = {0,1,0,-1};
        while(!q.empty()){
            pair<int,int> front = q.front();
            q.pop();
            int i = front.first;
            int j = front.second;
            for(int k=0;k<4;k++){
                int nr = i + r[k];
                int nc = j + c[k];
                if(nr >= 0 && nr < row && nc >= 0 && nc < col && grid[nr][nc] == 1){
                    if(!visited[i][j-1]){
                        visited[nr][nc] = 1;
                        q.push(make_pair(nr,nc));
                    }
                }
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int cnt = 0;
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visited(row,vector<int> (col,0));
        bfs(grid,row,col,visited);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1 && visited[i][j] == 0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}