#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(vector<int> input,vector<vector<int>>& output,vector<int> ans,int i){
    if(i>=input.size()){
        output.push_back(ans);
        return;
    }
    //exclude 
    Solve(input,output,ans,i+1);
    //include
    int element = input[i];
    ans.push_back(element);
    Solve(input,output,ans,i+1);
}
int main(){
    vector<int> input = {1,2,3};
    vector<vector<int>> output;
    vector<int> ans;
    int i = 0;
    Solve(input,output,ans,i);
    for (int i=0;i<output.size();i++){
        for (int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}