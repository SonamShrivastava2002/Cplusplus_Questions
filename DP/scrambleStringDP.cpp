#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //recursively
    bool solve(string s1,string s2){
        if(s1.compare(s2) == 0){
            return true;
        }
        if(s1.length() <= 1 || s2.length() <= 1){
            return false;
        }
        int n = s1.length();
        bool flag = false;
        for(int i=1;i<n;i++){
            if((solve(s1.substr(0,i),s2.substr(n-i,i)) && solve(s1.substr(i,n-i),s2.substr(0,n-i))) || (solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i,n-i),s2.substr(i,n-i)))){
                flag = true;
            }
        }
        return flag;
    }
    //memoization
    unordered_map<string,bool> mp;
    bool solve(string s1,string s2){
        if(s1.compare(s2) == 0){
            return true;
        }
        if(s1.length() <= 1 || s2.length() <= 1){
            return false;
        }
        string key = s1;
        key.push_back(' ');
        key.append(s2);
        if(mp.find(key) != mp.end()){
            return mp[key];
        }
        int n = s1.length();
        bool flag = false;
        for(int i=1;i<n;i++){
            if((solve(s1.substr(0,i),s2.substr(n-i,i)) && solve(s1.substr(i,n-i),s2.substr(0,n-i))) || (solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i,n-i),s2.substr(i,n-i)))){
                flag = true;
            }
        }
        mp[key] = flag;
        return flag;
    }
    bool isScramble(string S1, string S2){
        if(S1.length() != S2.length()){
            return false;
        }
        bool ans = solve(S1,S2);
        return ans;
    }    
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;       
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}