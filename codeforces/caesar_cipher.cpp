#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s,t,u;
        string ans;
        cin>>s>>t>>u;
        int sub = t[0] - s[0];
        for (int i=0;i<n;i++){
            u[i] = u[i] + sub;
            if(int(u[i])>int('z')){
                int x = u[i] - 123;
                u[i] = 'a' + x;
            }
        }
        cout<<u<<endl;
    }
    
    return 0;
}