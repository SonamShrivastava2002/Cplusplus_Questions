#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ab = "ab";
        string ba = "ba";
        int index1 = s.find(ab);
        int index2 = s.find(ba);
        if(index1!=-1){
            cout<<index1+1<<" "<<index1+2<<endl;
        }
        else if(index2!=-1){
            cout<<index2+1<<" "<<index2+2<<endl;
        }
        else{
            cout<<index1<<" "<<index2<<endl;
        }
    }
    
    return 0;
}