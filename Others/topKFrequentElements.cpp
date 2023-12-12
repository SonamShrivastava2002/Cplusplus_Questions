//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> temp(n,0);
        for(auto i:mp){
            temp[i.second] = max(temp[i.second],i.first);
        }
        vector<int> next;
        for(int i=0;i<n;i++){
            if(temp[i] != 0){
                next.push_back(temp[i]);
            }
        }
        vector<int> ans;
        int j = next.size()-1;
        while(k>0){
            ans.push_back(next[j]);
            j--;
            k--;
        }
        return ans;
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
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends