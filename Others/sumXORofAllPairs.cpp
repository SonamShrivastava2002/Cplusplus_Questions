//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise XOR of all pairs
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n){
    	long long ans = 0;
    	for(int i=0;i<32;i++){
    	    long long zc=0,oc=0;
    	    long long temp = 0;
    	    for(int j=0;j<n;j++){
    	        if(arr[j] % 2 == 0){
    	            zc++;
    	        }
    	        else{
    	            oc++;
    	        }
    	        arr[j] /= 2;
    	    }
    	    temp = oc*zc*(1<<i);
    	    ans += temp;
    	}
    	return ans;
    }
};
int main(){
	int t;
	cin>>t;
	while(t--){
        int n ;
        cin>>n;
        int arr[n+1];
        for( int i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}