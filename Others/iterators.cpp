#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    /*for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();
    cout<<(*it)<<endl;
    cout<<(*(it+1))<<endl;
    cout<<(*(it+2))<<endl;
    cout<<(*(it+3))<<endl;
    for (int i=0;i<v.size();i++){
        cout<<(*(it+i))<<" ";
    }*/
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it=v_p.begin();
    for (;it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}