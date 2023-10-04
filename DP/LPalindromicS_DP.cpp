#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int lcs(string s1,string s2,int n){
        int t[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        cout<<t[n][n]<<endl;
        return t[n][n];
    }
    int longestPalinSubseq(string A){
        string B = A;
        reverse(B.begin(),B.end());
        cout<<A<<" "<<B<<endl;
        int n = A.length();
        int ans = lcs(A,B,n);
        return ans;
    }
};
int32_t main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}