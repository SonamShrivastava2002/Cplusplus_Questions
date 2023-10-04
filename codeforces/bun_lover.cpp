#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        unsigned long long ans;
        ans = n*n + 2*n + 2;
        cout<<ans<<endl;
    }
    return 0;
}