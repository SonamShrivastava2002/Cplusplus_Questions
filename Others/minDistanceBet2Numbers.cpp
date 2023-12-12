//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    bool check(int num,int a[],int n){
        for(int i=0;i<n;i++){
            if(num == a[i]){
                return true;
            }
        }
        return false;
    }
    int minDist(int a[], int n, int x, int y) {
        if(!check(x,a,n) || !check(y,a,n)){
            return -1;
        }
        int st = 0;
        int end = INT_MAX;
        int ans = INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(a[i] == x){
                st = i;
                // cout<<i<<endl;
                // cout<<endl;
            }
            else if(a[i] == y){
                end = i;
                // cout<<i<<endl;
            }
            ans = min(ans,abs(st - end));
        }
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends