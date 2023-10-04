#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unsigned long long s;
        cin>>n>>s;
        unsigned long long p = pow(n,2);
        int ans = (s/p);
        cout<<ans<<endl;
    }    
    return 0;
}