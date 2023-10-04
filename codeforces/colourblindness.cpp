#include <iostream>
using namespace std;
bool match_string(string s1,string s2,int n){
    for (int i=0;i<n;i++){
        if (s1[i]=='G'){
            s1[i] = 'B';
        }
        if (s2[i]=='G'){
            s2[i] = 'B';
        }
    }
    if (s1==s2)
        return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        if(match_string(s1,s2,n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}