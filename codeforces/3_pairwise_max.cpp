#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        vector<int> v = {x,y,z};
        int maxi = max(max(x,y),z);
        int mini = min(min(x,y),z);
        if(x!=y && y!=z && z!=x){
            cout<<"NO"<<endl;
        }
        else if(count(v.begin(),v.end(),maxi) == 1){
            cout<<"NO"<<endl;
        }
        else{
            if(x==y && y==z && z==x){
                cout<<"YES"<<endl;
                cout<<x<<" "<<x<<" "<<x<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<maxi<<" "<<mini<<" "<<mini<<endl;
            }
        }
    }
    return 0;
}