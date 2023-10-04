#include <bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n){
    unordered_map<int,int> m;
    int f = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        f = max(f,m[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(f == m[arr[i]]){
            ans = arr[i];
            break;
        }
    }
    return ans;
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
        cout<<maximumFrequency(v,n);
    }
    return 0;
}