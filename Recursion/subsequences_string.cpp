#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(string str,vector<string>& output,string ans,int i){
    if(i>=str.length()){
        if(ans.length()>0){
            output.push_back(ans);
        }
        return ;
    }
    //exclusive
    Solve(str,output,ans,i+1);
    //includede
    char ch = str[i];
    ans.push_back(ch);
    Solve(str,output,ans,i+1);
}
int main(){
    string str = "abc";
    vector<string> output;
    string ans="";
    int i=0;
    Solve(str,output,ans,i);
    for (int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j];
        }
        cout<<endl;
    }
    return 0;
}