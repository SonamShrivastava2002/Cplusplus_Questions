#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longestCommonSubstr (string S1, string S2, int n, int m){
        int t[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
            }
        }
        string s = "";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(S1[i-1] == S2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i = n,j = m;
        while(i>0 && j>0){
            if(S1[i-1] == S2[j-1]){
                s.push_back(S1[i-1]);
                i--;
                j--;
            }
            else{
                if(t[i-1][j] > t[i][j-1]){
                    i--;
                }
                else{
                    j--;
                }
            }
        }
        reverse(s.begin(),s.end());
        //ACBCF,ABCDAF
        return s;
    }
};
int main(){
    /*int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;
        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }*/
    Solution ob;
    cout <<ob.longestCommonSubstr("abaaa","baca",5,4)<<endl;
}