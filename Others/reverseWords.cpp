#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) { 
        int l = S.length();
        vector<string> s;
        string temp = "";
        for(int i=0;i<l;i++){
            if(S[i] != '.'){
               temp.push_back(S[i]);
            }
            if(S[i] == '.' || i == l-1){
                s.push_back(temp);
                temp.clear();
            }
        }
        reverse(s.begin(),s.end());
        string ans = "";
        for(int i=0;i<s.size();i++){
            ans.append(s[i]);
            if(i != s.size() - 1){
                ans.push_back('.');
            }
        }
        return ans;
    } 
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}