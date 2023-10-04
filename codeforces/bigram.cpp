#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ch;
        string s;
        for (int i=0;i<n-2;i++){
            ch.clear();
            cin>>ch;
            s.append(ch);    
        }
        //cout<<s<<endl;
        for (int i=1;i<n-1;i+=2){
            if(s[i]==s[i+1]){
                s.erase(i,1);
                i--;
            }
        }
        if(s.length()==n){
            cout<<s<<endl;
        }
        else{
            s.append("a");
            cout<<s<<endl;
        }
    }
    return 0;
}