//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j == 0){
                    dp[i][j] = M[i][j];
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(dp[i][j] != 0 && j+1 > 0 && j+1 < m){
                    if(i-1 >= 0 && i-1 < n){
                        dp[i-1][j+1] = max(dp[i-1][j+1],dp[i][j]+M[i-1][j+1]);
                    }
                    dp[i][j+1] = max(dp[i][j+1],dp[i][j]+M[i][j+1]);
                    if(i+1 > 0 && i+1 < n){
                        dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j]+M[i+1][j+1]);
                    }
                }
                
            }
        }
        //finding maximum element in last column of dp matrix
        int j = m-1;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(dp[i][j],ans);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends