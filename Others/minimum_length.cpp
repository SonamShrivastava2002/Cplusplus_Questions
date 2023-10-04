#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subarray(vector<int> sortArr,vector<int> &arr,int n){
    sort(sortArr.begin(),sortArr.end());
    int st=0,end=0;
    for(int i=0;i<n;i++){
        if(arr[i] != sortArr[i]){
            st = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i] != sortArr[i]){
            end = i;
            break;
        }
    }
    int ans = end - st + 1;
    return ans;
}
int findLength(vector<int>& arr, int n) {
    int ans = subarray(arr,arr,n);
    return ans;
    //44 77 83 91 88 32 25 95 37 74 43 53 95 87 96 51 80 63 62 28 81 77 98
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = findLength(v,n);
        cout<<ans<<endl;
    }
    return 0;
}