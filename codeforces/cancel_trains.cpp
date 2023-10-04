#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(101);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ++arr[x];
        }
        for(int i=0;i<m;i++){
            int y;
            cin>>y;
            ++arr[y];
        }
        int ans=0;
        for (int i=0;i<100;i++){
            if(arr[i]>1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;  
} 
