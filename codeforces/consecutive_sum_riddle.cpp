#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        long long l=(-1*n + 1);
        unsigned long long r=n;
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}