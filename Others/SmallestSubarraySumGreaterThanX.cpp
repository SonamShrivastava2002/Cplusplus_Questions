//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{
  public:
    int smallestSubWithSum(int arr[], int n, int x){
        int sum = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        if(sum <= x){
            return ans;
        }
        int i = 0;
		int j = 0;
		sum = 0;
		ans = n+1;
		for(;i<n;){
			while(sum <= x && i < n){
				sum += arr[i];
				i++;
			}
			while(sum > x && j < n){
				if(i - j < ans){
					ans = i - j;
				}
				sum -= arr[j];
				j++;
			}
		}
		return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends