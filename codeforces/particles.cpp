#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt = count(v.begin(),v.end(),v[0]);
        long long ans;
        if(n == 1){
            ans = v[0];
        }
        else if(cnt == n){
            int mul = (n+1)/2;
            ans = (mul * v[0]);
        }
        cout<<ans;
    }
    return 0;
}