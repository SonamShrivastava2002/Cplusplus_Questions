//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int mod = 1e9 + 7;
    long long multiply(int a,int b){
        return ((a%mod)*1ll*(b%mod))%mod;
    }
    long long add(int a,int b){
        return (a%mod + b%mod)%mod;
    }
    long long countWays(int n, int k){
        // code here
        vector<int> dp(n+1,0);
        dp[1] = k;
        dp[2] = add(k,multiply(k,k-1));
        for(int i=3;i<=n;i++){
            dp[i] = add(multiply(dp[i-2],k-1),multiply(dp[i-1],k-1));
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends