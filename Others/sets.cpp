#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string v:s){
        cout<<v<<" ";
    }
    /*cout<<endl;
    auto it = s.begin();
    while(it != s.end()){
        cout<<(*it)<<" ";
        it++;
    }*/
}
void print(unordered_set<string> &s){
    for(string v:s){
        cout<<v<<" ";
    }
    /*cout<<endl;
    auto it = s.begin();
    while(it != s.end()){
        cout<<(*it)<<" ";
        it++;
    }*/
}
void print(multiset<string> &s){
    for(string v:s){
        cout<<v<<" ";
    }
    /*cout<<endl;
    auto it = s.begin();
    while(it != s.end()){
        cout<<(*it)<<" ";
        it++;
    }*/
}
int main(){
    //ordered set
    /*set<string> s;
    s.insert("abs");//TC - O(log(n));
    s.insert("ajf");
    s.insert("rhi");
    auto it = s.find("ajf"); //--- TC-O(log(n)) , to get any element in set we use find
    if(it != s.end()){
        cout<<(*it);
    }
    cout<<endl;
    print(s);
    if(it != s.end()){
        s.erase(it);
    }
    //s.erase("ajf");
    cout<<endl;
    print(s);*/
    //unordered sets
    /*unordered_set<string> s;
    s.insert("abs");//TC - O(1);
    s.insert("ajf");
    s.insert("rhi");
    auto it = s.find("ajf"); //--- TC-O(1) , to get any element in set we use find
    if(it != s.end()){
        cout<<(*it);
    }
    cout<<endl;
    print(s);
    if(it != s.end()){
        s.erase(it);
    }
    //s.erase("ajf");
    cout<<endl;
    print(s);*/
    //multi set
    multiset<string> s;
    s.insert("abs");//TC - O(log(n));
    s.insert("ajf");
    s.insert("rhi");
    s.insert("abd");
    s.insert("rhi");
    auto it = s.find("rhi"); //--- TC-O(log(n)) , to get any element in set we use find
    if(it != s.end()){
        cout<<(*it);
    }
    cout<<endl;
    print(s);
    /*if(it != s.end()){
        s.erase(it);
    }*/
    s.erase("rhi");
    cout<<endl;
    print(s);
    return 0;
}