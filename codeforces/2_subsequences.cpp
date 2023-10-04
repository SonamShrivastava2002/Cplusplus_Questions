#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
string a_found(string s){
    string a;
    sort(s.begin(),s.end());
    a = s[0];
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a = a_found(s);
        cout<<a<<" ";
        string b;
        int index = s.find(a);
        s.erase(s.begin()+index);
        cout<<s<<endl;
    }
    return 0;
}