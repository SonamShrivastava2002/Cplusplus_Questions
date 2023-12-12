//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(int n,int m,int x,int y){
        if(x >=0 && x < n && y >= 0 && y < m){
            return true;
        }
        return false;
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        vector<int> dx1 = {-1,-1,-1,0,0,1,1,1};
        vector<int> dy1 = {-1,0,+1,-1,+1,-1,0,+1};
        vector<int> dx2 = {-2,-2,-2,-2,-2,-1,-1,0,0,+1,+1,+2,+2,+2,+2,+2};
        vector<int> dy2 = {-2,-1,0,+1,+2,-2,+2,-2,+2,-2,+2,-2,-1,0,+1,+2};
        for(int i=0;i<q;i++){
            int x = queries[i][1];
            int y = queries[i][2];
            int preAns1 = 0;
            if(queries[i][0] == 1){
                for(int j=0;j<8;j++){
                    int new_x = x + dx1[j];
                    int new_y = y + dy1[j];
                    if(isSafe(n,m,new_x,new_y)){
                        preAns1 += mat[new_x][new_y];
                    }
                    ans.push_back(preAns1);
                }
            }
            else{
                for(int j=0;j<16;j++){
                    int new_x = x + dx2[j];
                    int new_y = y + dy2[j];
                    if(isSafe(n,m,new_x,new_y)){
                        preAns1 += mat[new_x][new_y];
                    }
                    ans.push_back(preAns1);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends