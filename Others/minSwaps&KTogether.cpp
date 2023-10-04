//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
        //sliding window approach
        int fav = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                fav++;
            }
        }
        if(fav == 0 || fav == n){
            return 0;
        }
        int nfav = 0;
        int minSwap = 0;
        for(int i=0;i<fav;i++){
            if(arr[i] > k){
                nfav++;
            }
        }
        int i = 0;
        int j = fav;
        minSwap = nfav;
        while(j<n && i<n){
            if(arr[j] > k){
                nfav++;
            }
            if((j-i+1)>fav){
                if(arr[i] > k){
                    nfav--;
                }
                i++;
            }
            minSwap = min(minSwap,nfav);
            j++;
        }
        return minSwap;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends