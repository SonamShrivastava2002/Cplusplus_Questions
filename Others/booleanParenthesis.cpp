#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int t[201][201][2]; //as 3 varaibles are changing in recursive call
    //recusively
    int solve(string s,int i,int j,bool isBool){
        //base case
        if(i>j){
            return false;
        }
        if(i==j){
            if(isBool == true){
                return s[i] = true;
            }
            else if(isBool == false){
                return s[i] = false;
            }
        }
        int ans = 0;
        for(int k=i+1;k<j;k+=2){
            int lt = solve(s,i,k-1,true);
            int lf = solve(s,i,k-1,false);
            int rt = solve(s,k+1,j,true);
            int rf = solve(s,k+1,j,false);
            if(s[i] == '&'){
                if(isBool == true){
                    ans = ans + lt*rt;
                }
                else{
                    ans = ans + lt*rf + rt*lf + lf*rf;
                }
            }
            else if(s[i] == '|'){
                if(isBool == true){
                    ans = ans + lt*rf + lf*rt + lt*rt;
                }
                else{
                    ans = ans + lf*rf;
                }
            }
            else{
                if(isBool == true){
                    ans = ans + lf*rt + rf*lt;
                }
                else{
                    ans = ans + lt*rt + rf*lf;
                }
            }
        }
        return ans;
    }
    //memoization
    int solve(string s,int i,int j,bool isBool){
        //base case
        int mod = 10e2 + 3;
        if(i>j){
            return false;
        }
        if(i==j){
            if(isBool == 1){
                return s[i] == 'T';
            }
            else{
                return s[i] == 'F';
            }
        }
        if(t[i][j][isBool] != -1){
            return (t[i][j][isBool])%mod;
        }
        int ans = 0;
        
        for(int k=i+1;k<=j-1;k=k+2){
            int lt,lf,rt,rf;
            lt = solve(s,i,k-1,1);
            lf = solve(s,i,k-1,0);
            rt = solve(s,k+1,j,1);
            rf = solve(s,k+1,j,0);
            if(s[k] == '&'){
                if(isBool == true){
                    ans = ans + lt*rt;
                }
                else{
                    ans = ans + lt*rf + lf*rt + lf*rf;
                }
            }
            else if(s[k] == '|'){
                if(isBool == true){
                    ans = ans + lt*rf + lf*rt + lt*rt;
                }
                else{
                    ans = ans + lf*rf;
                }
            }
            else if(s[k] == '^'){
                if(isBool == true){
                    ans = ans + lf*rt + lt*rf;
                }
                else{
                    ans = ans + lt*rt + lf*rf;
                }
            }
            t[i][j][isBool] = ans%mod;
        }
        return ans%mod;
    }
    //35-T|F^F&T|F^F^F^T|T&T^T|F^T^F&F^T|T^F
    int countWays(int N, string S){
        int mod = 10e2 + 3;
        memset(t,-1,sizeof(t));
        int ans = solve(S,0,N-1,true);
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;       
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}