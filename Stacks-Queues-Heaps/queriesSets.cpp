#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    multiset<int> s;
    while(q--){
        int y,x;
        cin>>y>>x;
        bool ans = false;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            auto it = s.find(x);
            s.erase(it);
        }
        else{
            if(s.find(x) == s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}