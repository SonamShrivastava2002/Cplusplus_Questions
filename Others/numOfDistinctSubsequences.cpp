//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
    const int MAX_CHAR = 256;
	int distinctSubsequences(string s)
	{
        int n = s.length();
	    vector<int> mp(MAX_CHAR,-1);
	    int mod = 1e9 + 7;
        int dp[n+1];
        //empty string
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            //for permutation
            dp[i] = (2*dp[i-1])%mod;
            //checking if the string is present or not
            if(mp[s[i-1]] != -1){
                dp[i] = (dp[i] - dp[mp[s[i-1]]] + mod)%mod;
            }
            mp[s[i-1]] = i-1;
        }
        return dp[n]%mod;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends