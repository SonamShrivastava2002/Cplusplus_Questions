#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
    int lcs(string s1,string s2,int n,int m){
        int t[n+1][m+1];
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
	int minOperations(string str1, string str2){ 
        int n = str1.length();
        int m = str2.length();
        int common = lcs(str1,str2,n,m);
        int ans = (n - common) + (m - common);
        return ans;
	} 
};
int main(){
   	int t;
    cin >> t;
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";	     
    }
    return 0;
}