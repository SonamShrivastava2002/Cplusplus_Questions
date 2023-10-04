#include<bits/stdc++.h>
using namespace std;
class Solution {
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
                    if(s1[i-1] == s2[j-1] && i != j){
                        t[i][j] = 1 + t[i-1][j-1];
                    }
                    else{
                        t[i][j] = max(t[i-1][j],t[i][j-1]);
                    }
                }
            }
            return t[n][n];
        }
		int LongestRepeatingSubsequence(string str){
            int ans = lcs(str,str,str.length());
            return ans;
		}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}