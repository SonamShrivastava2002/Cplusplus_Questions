#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        string correct = "Timur";
        sort(s.begin(),s.end());
        sort(correct.begin(),correct.end());
        if (n>5 || n<5){
            cout<<"NO"<<endl;
        }
        else if (s==correct){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}