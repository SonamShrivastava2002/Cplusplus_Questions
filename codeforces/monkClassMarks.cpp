#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,set<string>> m;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }
    for(auto it = --m.end();;){
        auto &students = (*it).second;
        int marks = (*it).first;
        for(auto student : students){
            cout<<student<<" "<<marks<<endl;
        }
        if(it == m.begin()){
            break;
        }
        else{
            it--;
        }
    }
    return 0;
}