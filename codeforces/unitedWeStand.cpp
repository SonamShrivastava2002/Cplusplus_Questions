#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool same(vector<int> arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(same(arr,n)){
            cout<<"-1"<<endl;
        }
        else{
            int lb=0,lc=0;
            long long mini = INT64_MAX;
            for(int i=0;i<n;i++){
                if(arr[i]<mini){
                    mini = arr[i];
                }
            }
            int l = count(arr.begin(),arr.end(),mini);
            lb = l;
            lc = n-l;
            vector<int> b(lb);
            vector<int> c(lc);
            for(int i=0;i<lb;i++){
                b[i] = mini;
            }
            int j=0;
            for(int i=0;i<n;i++){
                if(arr[i] != mini){
                    c[j] = arr[i];
                    j++;
                }
            }
            cout<<lb<<" "<<lc<<endl;
            for(int i=0;i<lb;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<lc;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}