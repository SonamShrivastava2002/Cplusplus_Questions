#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long n;
        cin>>n;
        unsigned long long ans = (n+1)/2;
        cout<<ans<<endl; 
    }
    return 0;
}