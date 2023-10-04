#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    //recursively - TC - exponential
    int solve(int n,int k){
        if(k==1 || n==1 || k==0){
            return k;
        }
        int ans = INT_MAX;
        for(int i=1;i<=k;i++){
            int temp = 1 + max(solve(n-1,i-1),solve(n,k-i)); //max becoause we have to consider worst case
            ans = min(temp,ans);
        }
        return ans;
    }
    //memoization
    int t[201][201];
    int solve(int n,int k){
        if(k==1 || n==1 || k==0){
            return k;
        }
        if(t[n][k] != -1){
            return t[n][k];
        }
        int ans = INT_MAX;
        for(int i=1;i<=k;i++){
            int broken,notBroken;
            if(t[n-1][i-1] != -1){
                broken = t[n-1][i-1];
            }
            else{
                broken = solve(n-1,i-1);
            }
            if(t[n][k-i] != -1){
                notBroken = t[n][k-i];
            }
            else{
                notBroken = solve(n,k-i);
            }
            int temp = 1 + max(broken,notBroken); //max becoause we have to consider worst case
            ans = min(temp,ans);
            t[n][k] = ans;
        }
        return ans;
    }
    int eggDrop(int n, int k){
        memset(t,-1,sizeof(t));
        int final = solve(n,k);
        return final;
    }
};
//{ Driver Code Starts.
int main(){
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}