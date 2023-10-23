//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
    //using DP
	int maxSumIS(int arr[], int n)  {  
	    int ans = 0;
        vector<int> v(arr,arr+n);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j] < arr[i]){
                    v[i] = max(v[i],v[j]+arr[i]);
                }
            }
        }
        for(auto i:v){
            ans = max(ans,i);
        }
        return ans;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends