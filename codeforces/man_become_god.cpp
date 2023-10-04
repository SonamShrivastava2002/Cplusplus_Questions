#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mini(int *arr,int n){
    sort(arr,arr+n);
    return arr[0];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s=0;
        int e=n-1;
        int mid = s + (e-s)/2;
        int ans = 0;
        if(k%2==0){
            if(k<arr[mid]){
                ans = arr[mid] + mini(arr,n);
            }
            else if(k>arr[mid]){
                ans = arr[mid] - mini(arr,n);
            }
            else{
                ans = arr[mid];
            }
        }
        else{
            if(k<arr[mid]){
                ans = arr[mid] - mini(arr,n);
            }
            else if(k>arr[mid]){
                ans = arr[mid] + mini(arr,n);
            }
            else{
                ans = arr[mid];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}