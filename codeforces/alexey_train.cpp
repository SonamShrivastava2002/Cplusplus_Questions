#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        int tm[n];
        for (int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        for (int i=0;i<n;i++){
            cin>>tm[i];
        }
        int sec;
        int ans;
        for (int i=0;i<n;i++){
            int sub = ((v[i].second - v[i].first)+1)/2;
            if(i==0){
                v[i].first+=tm[i]; 
                ans = v[i].first;   
            }
            else if(i!=n-1){
                int temp=v[i].first - sec;
                v[i].first = v[i-1].second + temp + tm[i];
            }
            else{
                int temp=v[i].first - sec;
                ans = v[i-1].second + temp + tm[i];
                break;
            }
            sec = v[i].second;
            if((v[i].second - v[i].first)<sub){    
                v[i].second = v[i].first + sub;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}