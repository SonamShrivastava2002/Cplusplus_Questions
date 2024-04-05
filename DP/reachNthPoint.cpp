//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
            // if(n <= 3){
            //     return n;
            // }
            // int ans = nthPoint(n-1) + nthPoint(n-2);
            // return ans;
            int dp[n];
		    int mod = 1e9 + 7;
            dp[0] = 1;
            dp[1] = 2;
            dp[2] = 3;
            for(int i=3;i<n;i++){
                dp[i] = ((dp[i-1]%mod) + (dp[i-2]%mod))%mod;
            }
            return dp[n-1];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends