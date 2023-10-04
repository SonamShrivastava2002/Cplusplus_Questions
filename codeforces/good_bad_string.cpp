#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int st=0;
        int e=1;
        int count=0;
        while(e<n && st<e){
            if(s[st]==s[e]){
                st = e+1;
                e+=2;
            }
            else if(s[st]!=s[e]){
                s[st] = s[e];
                st = e+1;
                e+=2;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}