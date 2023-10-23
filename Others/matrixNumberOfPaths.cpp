//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    //using recursion with high time complexity and space complexity
    void solve(int m,int n,long long &ans,int x,int y){
        if(x == m-1 && y == n-1){
            ans = ans + 1;
            return;
        }
        //right
        int nx = x;
        int ny = y + 1;
        if(nx < m && ny < n){
            solve(m,n,ans,nx,ny);
        }
        //down
        nx = x + 1;
        ny = y;
        if(nx < m && ny < n){
            solve(m,n,ans,nx,ny);
        }
    }
    //for making answer in range of 10e8 + 7
    long long inverse(long long ans,int m){
        long long m1 = m;
        long long x1 = 0;
        long long x2 = 1;
        if(m == 1){
            return 0;
        }
        while(ans > 1){
            long long q = ans/m;
            long long t = m;
            m = ans%m;
            ans = t;
            t = x1;
            x1 = x2 - (q*x1);
            x2 = t;
        }
        if(x2 < 0){
            x2 += m1;
        }
        return x2;
    }
    long long  numberOfPaths(int M, int N){
        /*if(M == 1 || N == 1){
            return 1;
        }
        long long mod = 10e9 + 7;
        long long ans = 0;
        solve(M,N,ans,0,0);
        ans = ans%mod;
        return ans;*/
        //using combinatorics
        long long path = 1;
        const int mod = 10e8 + 7;
        for(int i=0;i<M-1;i++){
            path = (path*(i+N))%mod;
            path = (path*(inverse(i+1,mod)))%mod;
        }
        return path;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends