#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = (n/2);
        if(n%2==0){
            cout<<ans<<endl;
        }
        else{
            cout<<(ans+1)<<endl;
        }
    }
    return 0;
}