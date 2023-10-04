#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    //Recursively
    int solve(int arr[],int i,int j){
        if(i >= j){
            return 0;
        }
        int mn = INT_MAX;
        for(int k=i;k<=j-1;k++){
            int tempAns = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            //cout<<tempAns<<endl;
            mn = min(tempAns,mn);
            //cout<<mn<<endl;
        }
        return mn;
    }
    //memoization
    int t[101][101];
    int solve(int arr[],int i,int j){
        if(i >= j){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        int mn = INT_MAX;
        for(int k=i;k<=j-1;k++){
            int tempAns = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            //cout<<tempAns<<endl;
            mn = min(tempAns,mn);
            //cout<<mn<<endl;
        }
        t[i][j] = mn;
        return mn;
    }
    int matrixMultiplication(int N, int arr[]){
        for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                t[i][j] = -1;
            }
        }
        int ans = solve(arr,1,N-1);
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];       
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}