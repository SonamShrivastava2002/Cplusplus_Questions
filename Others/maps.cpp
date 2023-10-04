#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "abc";          //O(logn)
    m[3] = "bcd";
    m[5] = "cde";
    m.insert({4,"def"});
    map<int,string> :: iterator it;
    //using iterators
    /*for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    //using pointers
    for(auto &r : m){
        cout<<r.first<<" "<<r.second<<endl;
    }*/
    auto i = m.find(5);
    //cout<<(*i).first<<" "<<(*i).second<<endl;
    /*Given n strings,print unique strings in lexioraphical order with
    their frequency
    n <= 10^5
    |s| <= 100
    */
    map<string,int> mq;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        mq[s]++;
    }
    for(auto pr:mq){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}