#include<bits/stdc++.h>
using namespace std;
int t[51][51];
class Solution{
    public:
    int lcs(string S1,string S2,int n,int m){
        int &ret = t[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
            }
        }
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
    }
    string longestCommonSubstr (string S1, string S2, int n, int m){
        string s = "";
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
    vector<string> ans;
    Solution ob;
    string sin1 = "abcabcaa";
    string sin2 = "acbacba";
    int n = sin1.length();
    int m = sin2.length();
    int maxi = max(n,m);
    int mini = min(n,m);
    string s1 = "";
    string s2 = "";
    if(maxi == n){
        s1 = sin2;
        s2 = sin1;
    }
    else{
        s1 = sin1;
        s2 = sin2;
    }
    ob.lcs(s1,s2,mini,maxi); 
    n = mini;
    m = maxi;
    for(auto i=0;i<t[mini][maxi];i++){    
        string longer = "";
        for(int j = i;j<maxi;j++){
            longer.push_back(s2[j]);
        }
        //cout<<longer<<endl;
        //cout<<m<<endl;
        ob.lcs(s1,longer,n,m);
        string s = ob.longestCommonSubstr(s1,longer,n,m);
        m--;
        //cout<<<endl;
        ans.push_back(s);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}