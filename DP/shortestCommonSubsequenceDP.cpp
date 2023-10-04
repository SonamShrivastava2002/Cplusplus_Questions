#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(string s1,string s2,int n,int m){
        int t[n+1][m+1];
        string s = "";
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
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
    int shortestCommonSupersequence(string X, string Y, int m, int n){
        int o = lcs(X,Y,X.length(),Y.length());
        cout<<o<<endl;
        int ans = m + n - o;
        return ans;
    }
};
int main(){   
    int t;
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}