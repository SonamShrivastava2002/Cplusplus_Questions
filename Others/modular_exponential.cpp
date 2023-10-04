#include <iostream>
using namespace std;
int modular(int x,int n){
    int res = 1;
    while(n>0){
        if(n&1){
            res = res * x;
        }
        x = x*x;
        n = n>>1;
    }
    return res;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<modular(x,n);
    return 0;
}