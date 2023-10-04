#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n,m,x;
        cin>>n>>m>>x;
        unsigned long long r = (x-1)%n;
        unsigned long long c = (x-1)/n;
        cout<<(r*m + c + 1)<<endl;
    }
    return 0;
}