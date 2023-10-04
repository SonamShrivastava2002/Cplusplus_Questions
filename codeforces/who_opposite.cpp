#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n = 2*(abs(a-b));
        int d;
        if(a>n || b>n || c>n){
            cout<<"-1"<<endl;
        }
        else{
            d = (n/2) + c;
            while(d>n){
                d = d-n;
            }
            cout<<d<<endl;
        }
    }
    return 0;
}