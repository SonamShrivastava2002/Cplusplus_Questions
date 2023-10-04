#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<endl;
        int x,y;
        cin>>x>>y;
        int a,b;
        cin>>a>>b;
        int m,n;
        cin>>m>>n;
        if(x!=a && a!=m && x!=m){
            //vertical line possible
            cout<<"YES"<<endl;
        }
        else if(y!=b && b!=n && y!=n){
            //horizontal line possible
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}