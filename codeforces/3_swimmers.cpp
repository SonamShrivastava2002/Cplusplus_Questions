#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,a,b,c;
        cin>>p>>a>>b>>c;
        float pa = (p/a);
        cout<<pa<<endl;
        double ab = min((round(p/a))*a,(round(p/b))*b);
        unsigned long long abc = min(ab,(round(p/c))*c);
        unsigned long long ans = abs(p-abc);
        cout<<ans<<endl;
    }
    return 0;
}