#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> copy(n+1),v(n+1);
        for (int i=0;i<n;i++){
            int temp;
            cin>>temp;
            ++copy[temp];
            v[temp] = i+1;
        }
        int i=0;
        int ans=-1;
        while(i<=n){
            if(copy[i]==1){
                ans = v[i];
                break;    
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}