#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ans = '$';
    for (int i=0;i<s.length();i++){
        char ch = s[i];
        if(count(s.begin(),s.end(),ch) == 1){
            ans = ch;
            break;
        }
    }
    cout<<ans;
    return 0;
}