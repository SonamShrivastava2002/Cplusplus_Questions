#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unsigned long long athlete = pow(2,n);
        cout<<(athlete-1)<<endl;
    }
    return 0;
}