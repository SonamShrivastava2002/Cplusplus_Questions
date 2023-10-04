#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(vector<int> v,vector<vector<int>>& ans,int i){
    if(i>=v.size()){
        ans.push_back(v);
        return;
    }
    for (int j=i;j<v.size();j++){
        swap(v[i],v[j]);
        Solve(v,ans,i+1);
        //backtrack
        swap(v[i],v[j]);
    }
}
int main(){
    vector<int> v = {1,2,3};
    vector<vector<int>> ans;
    int i=0;
    Solve(v,ans,i);
    return 0;
}