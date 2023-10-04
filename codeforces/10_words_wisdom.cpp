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
        for (int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        int mini = -1;
        for (int i=0;i<n;i++){
            if(v[i].second > mini && v[i].first <= 10){
                mini = i+1;
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}