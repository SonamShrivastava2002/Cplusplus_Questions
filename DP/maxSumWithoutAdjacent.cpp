//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
    //using recursion
    // int solve(int *arr,int n){
    //     if(n < 0){
    //         return 0;
    //     }
    //     if(n == 0){
    //         return arr[n];
    //     }
    //     int include = solve(arr,n-2) + arr[n];
    //     int exclude = solve(arr,n-1);
    //     return max(include,exclude);
    // }
    // int findMaxSum(int *arr, int n) {
    //     int ans = solve(arr,n-1);
    //     return ans;
	// }
    //using memoization
    // int solve(int *arr,int n,int *dp){
    //     if(n < 0){
    //         return 0;
    //     }
    //     if(n == 0){
    //         return arr[n];
    //     }
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     int include = solve(arr,n-2,dp) + arr[n];
    //     int exclude = solve(arr,n-1,dp);
    //     dp[n] = max(include,exclude);
    //     return dp[n];
    // }
    // int findMaxSum(int *arr, int n) {
    //     int dp[n] = {-1};
    //     int ans = solve(arr,n-1,dp);
    //     return ans;
	// }
    //using 0-1 knapsack
    // int solve(int *arr,int n){
    //     int dp[n] = {0};
    //     dp[0] = arr[0];
    //     for(int i=1;i<n;i++){
    //         int include = dp[i-2] + arr[i];
    //         int exclude = dp[i-1];
    //         dp[i] = max(include,exclude);
    //     }
    //     return dp[n-1];
    // }
    // int findMaxSum(int *arr, int n) {
    //     int ans = solve(arr,n);
    //     return ans;
	// }
    int solve(int *arr,int n){
        int pre2 = 0;
        int pre1 = arr[0];
        for(int i=1;i<n;i++){
            int include = pre2 + arr[i];
            int exclude = pre1;
            int ans = max(include,exclude);
            pre2 = pre1;
            pre1 = ans;
        }
        return pre1;
    }
    int findMaxSum(int *arr,int n){
        int ans = solve(arr,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends