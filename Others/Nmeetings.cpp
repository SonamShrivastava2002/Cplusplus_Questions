//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    }
    int maxMeetings(int start[], int end[], int n){
        int cnt = 1;
        vector<pair<int,int>> sortedEnd;
        for(int i=0;i<n;i++){
            pair<int,int> p = make_pair(start[i],end[i]);
            sortedEnd.push_back(p);
        }
        sort(sortedEnd.begin(),sortedEnd.end(),cmp);
        for(int i=1,j=0;i<n && j<n;i++){
            if(sortedEnd[i].first > sortedEnd[j].second){
                cnt++;
                j=i;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends