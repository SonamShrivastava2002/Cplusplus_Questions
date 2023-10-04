#include <bits/stdc++.h>
using namespace std;
int findWays(vector<int>& arr, int k){
    int n = arr.size();
    int t[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            if(i==0){
                t[i][j] = 0;
            }
            if(j==0){
                t[i][j] = 1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(arr[i-1] > j){
                t[i][j] = t[i-1][j];
            }
            else if(arr[i-1] <= j){
                t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
            }
        }
    }
    return t[n][k];
}
int main(){
    return 0;
}