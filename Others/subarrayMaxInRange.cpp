//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R){
        long ans = 0;
        long canHave = 0;
        long canHave2 = 0;
        for(int i=0;i<n;i++){
            if(a[i] < L){
                canHave++;
                canHave2++;
            }
            else if(a[i] > R){
                ans += (canHave * (canHave + 1))/2;
                ans -= (canHave2 * (canHave2 + 1))/2;
                canHave = canHave2 = 0;
            }
            else{
                ans -= (canHave2 * (canHave2 + 1))/2;
                canHave2 = 0;
                canHave++;
            }
        }
        ans += (canHave * (canHave + 1))/2;
        ans -= (canHave2 * (canHave2 + 1))/2;
        return ans;
    }
};
//{ Driver Code Starts.
// driver program
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}
// } Driver Code Ends