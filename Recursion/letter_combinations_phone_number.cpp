#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Solve(string digit,string output,int index,vector<string>& ans,string mapping[]){
    //base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int num = digit[index] - '0';
    string value = mapping[num];
    for (int i=0;i<value.length();i++){
        output.push_back(value[i]);
        Solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}
int main(){
    string digits = "23456789";
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    Solve(digits,output,index,ans,mapping);
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}