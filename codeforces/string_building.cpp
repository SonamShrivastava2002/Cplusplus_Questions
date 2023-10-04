#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ans = true;
        int n = s.length();
        for(int i=0;i<n;i++){
            if((i==0 || s[i]!=s[i-1]) && (i==n-1 || s[i]!=s[i+1])){
                ans = false;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}