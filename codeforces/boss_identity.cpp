#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mini(vector<int> v,int c){
    int ans = -2;
    for (int i=0;i<v.size();i++){
        if(v[i]>c){
            ans = i;
            
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        vector<int> v;
        for (int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        vector<int> vi;
        for (int i=0;i<q;i++){
            int j;
            cin>>j;
            vi.push_back(j);

        }
        for (int i=0;i<q;i++){
            int a = mini(v,vi[i]);
            if(a == -1){
                v.push_back(v[i-n] | v[i-n+1]);
                a = mini(v,vi[i]);
            }
            cout<<a<<endl;
        }
    }
    return 0;
}