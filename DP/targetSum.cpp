//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int findTargetSumWays(vector<int>&A ,int target) {
        int n = A.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += A[i];
        }
        if((target+sum)%2 != 0){
            return 0;
        }
        if(target>sum){
            return 0;
        }
        int s1 = (target+sum)/2;
        int mod = 1e9 + 7;
        int t[s1+1];
        for(int j=0;j<=s1;j++){
            t[j] = 0;
        }
        t[0] = 1;
        for(int i=0;i<n;i++){
            for(int j=s1;j>=A[i];j--){
                t[j] += (t[j-A[i]]);
            }
        }
        return (t[s1]);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends