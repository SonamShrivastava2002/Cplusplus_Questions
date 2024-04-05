//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    long long end1[n],end0[n];
        int mod = 1e9 + 7;
        end1[0] = end0[0] = 1;
        for(int i=1;i<n;i++){
            end0[i] = (end1[i-1] + end0[i-1])%mod;
            end1[i] = end0[i-1];
        }
        long long ans = end1[n-1] + end0[n-1];
        ans = ans % mod;
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
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends