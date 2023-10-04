#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,b,d;
        cin>>r>>b>>d;
        long long mini = (min(r,b))*(1+d);
        if (mini>=max(r,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}