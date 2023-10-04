#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    int lcs(string s1,string s2,int n,int m){
        int t[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    t[i][j] = 0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
    int findMinInsertions(string S){
        string s_new = S;
        reverse(s_new.begin(),s_new.end());
        int l = lcs(S,s_new,S.length(),S.length());
        int ans = S.length() - l;
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}