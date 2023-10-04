#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int t[501][501];
    //using recursion
    bool isPalindrome(string str,int i,int j){
        while(i<j){
            if(str[i] != str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    int solve(string s,int i,int j){
        if(i>=j || isPalindrome(s,i,j)){
            return 0;
        }
        int mn = INT_MAX;
        for(int k=i;k<j;k++){
            int temp = solve(s,i,k) + solve(s,k+1,j) + 1;
            mn = min(mn,temp);
            //cout<<mn<<endl;
        }
        return mn;
    }
    //using memoization
    int solve(string s,int i,int j){
        if(i>=j || isPalindrome(s,i,j)){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        int mn = INT_MAX;
        int left = 0;
        int right = 0;
        for(int k=i;k<j;k++){
            //int temp = solve(s,i,k) + solve(s,k+1,j) + 1;
            if(t[i][k] != -1){
                left = t[i][k];
            }
            else{
                left = solve(s,i,k);
                t[i][k] = left;
            }
            if(t[k+1][j] != -1){
                right = t[k+1][j];
            }
            else{
                right = solve(s,k+1,j);
                t[k+1][j] = right;
            }
            int temp = 1 + left + right;
            mn = min(mn,temp);
            //cout<<mn<<endl;
        }
        t[i][j] = mn;
        return mn;
    }
    int palindromicPartition(string str){
        for(int i=0;i<500;i++){
            for(int j=0;j<500;j++){
                t[i][j] = -1;
            }
        }
        int ans = solve(str,0,str.length() - 1);
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;       
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}