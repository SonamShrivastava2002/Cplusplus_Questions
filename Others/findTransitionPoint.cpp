//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int ans = -1;
        int st = 0;
        int end  = n-1;
        int mid = 0;
        while(st <= end){
            mid = st + (end-st)/2;
            if(arr[mid] == 0){
                st = mid + 1;
            }
            else{
                end = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends