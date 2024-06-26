#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mp;
        int n = paths.size();
        for(int i=0;i<n;i++){
            mp[paths[i][0]] = paths[i][1];
        }
        string ans = "";
        for(int i=0;i<n;i++){
            if(mp.find(paths[i][1]) == mp.end()){
                ans = paths[i][1];
                break;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}