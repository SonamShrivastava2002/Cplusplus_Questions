//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int countSetBits(int x){
        int cnt = 0;
        while(x > 0){
            if((x & 1) > 0){
                cnt++;
            }
            x >>= 1;
        }
        return cnt;
    }
	int is_bleak(int n){
        int x = 0;
        if(n > 30){
            x = n-30;
        }
        else{
            x = 1;
        }
        for(;x<=n;x++){
            if(x + countSetBits(x) == n){
                return 0;
            }
        }
        return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends