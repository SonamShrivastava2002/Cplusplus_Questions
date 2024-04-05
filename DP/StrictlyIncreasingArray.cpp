//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution {
  public:
    int LTS(vector<int> &arr){
        int n = arr.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i] > arr[j] && (arr[i] - arr[j]) >= (i-j)){
                    dp[i] = max(dp[i], 1+dp[j]);
                }
            }
        }
        int ans = 0;
        for(auto it:dp){
            ans = max(ans, it);
        }
        return ans;
    }
    int min_operations(vector<int>& nums) {
        int l = LTS(nums);
        int n = nums.size();
        return (n - l);
    }
};
//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends