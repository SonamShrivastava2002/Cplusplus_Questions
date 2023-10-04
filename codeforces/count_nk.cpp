#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countingOccur(int arr[],int n,int k){
    int v = 0;
    int s = (n/k);
    sort(arr,arr+n);
    for(int i=0;i<n;){
        int cnt = count(arr,arr+n,arr[i]);
        if(cnt>s){
            v++;
        }
        i = i+cnt;
    }
    return v;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = countingOccur(arr,n,k);
    cout<<ans<<endl;
    return 0;
}