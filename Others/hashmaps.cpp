#include <bits/stdc++.h>
using namespace std;
int main(){
    //creation
    unordered_map<string,int> m;
    //insertion
    //method - 1;
    pair<string,int> p = make_pair("Sonam",3);
    m.insert(p);
    //method - 2;
    pair<string,int> p2("Shrivastava",2);
    m.insert(p2);
    //method - 3;
    m["mera"] = 1;
    //updation
    m["mera"] = 2;
    //searching
    cout<<m["mera"]<<endl;
    cout<<m.at("Sonam")<<endl;
    //cout<<m.at("unknown")<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    //size
    cout<<m.size()<<endl;
    cout<<m.count("the")<<endl;
    cout<<m.count("Shrivastava")<<endl;
    //erase
    m.erase("unknown");
    cout<<m.size()<<endl;
    //tracking thorugh maps
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}