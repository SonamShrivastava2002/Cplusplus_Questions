//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return (a[2] < b[2]);
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<vector<int>> sortedEnd;
        vector<int> ans;
        for(int i=0;i<N;i++){
            sortedEnd.push_back({S[i],i+1,F[i]});
        }
        sort(sortedEnd.begin(),sortedEnd.end(),cmp);
        ans.push_back(sortedEnd[0][1]);
        for(int i=1,j=0;i<N && j<N;i++){
            if(sortedEnd[i][0] > sortedEnd[j][2]){
                ans.push_back(sortedEnd[i][1]);
                j=i;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends