#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void candy(int arr[],int n){
    sort(arr,arr+n);
    int max1 = arr[n-1];
    int max2 = arr[n-2];
    if(max1 == max2){
        cout<<"YES"<<endl;
    }
    if(max1 == max2+1){
        cout<<"YES"<<endl;
    }
    if(max1>=max2+2){
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            if(arr[0] > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            candy(arr,n);
        }
    }
    
    return 0;
}