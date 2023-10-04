//hackerearth que
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> s;
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            s.insert(temp); //TC - O(log(n))
        }
        long long cnt = 0;
        for(int i=0;i<k;i++){
            auto it = --s.end(); //TC - O(log(n))       
            cnt+=(*it);
            //cout<<cnt<<endl;
            long long val = (*it)/2;             
            //cout<<val<<endl;
            s.erase(it); //TC - O(1)
            s.insert(val); //TC - O(log(n))
        }
        cout<<cnt<<endl;
    }
    return 0;
}