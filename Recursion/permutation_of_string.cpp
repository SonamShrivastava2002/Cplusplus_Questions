#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(string v,vector<string>& ans,int i){
    if(i>=v.length()){
        ans.push_back(v);
        return;
    }
    for (int j=i;j<v.length();j++){
        swap(v[i],v[j]);
        Solve(v,ans,i+1);
        //backtrack
        swap(v[i],v[j]);
    }
}
int main(){
    string v = "abc";
    vector<string> ans;
    int i=0;
    Solve(v,ans,i);
    sort(ans.begin(),ans.end());
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}