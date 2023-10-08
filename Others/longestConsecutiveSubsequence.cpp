//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int ans = 0;
        if(N == 1){
            return 1;
        }
        set<int> curr;
        for(int i=0;i<N;i++){
            curr.insert(arr[i]);
        }
        int n = curr.size();
        vector<int> copy(n);
        int index = 0;
        for(auto i:curr){
            //cout<<i<<" ";
            copy[index] = i;
            index++;
        }
        cout<<endl;
        sort(copy.begin(),copy.end());
        int i=0,j=i+1;
        while(i<n && j<n){
            if(copy[j] - copy[i] == j-i){
                j++;
            }
            else{
                ans = max(ans,(j-i));
                i = j;
                j = i+1;
            }
        }
        ans = max(ans,(j-i));
        return ans;
    }
};
int main(){
    int  t,n,i,a[100001];
    cin>>t;
    while(t--){
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    Solution obj;
    cout<<obj.findLongestConseqSubseq(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends