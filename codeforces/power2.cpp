#include <iostream>
using namespace std;
long long power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    long long p = power(a,b/2);
    if(b%2==0){
        return p*p;
    }
    else{
        return a*p*p;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    long long ans = power(a,b);
    cout<<ans;
    return 0;
}