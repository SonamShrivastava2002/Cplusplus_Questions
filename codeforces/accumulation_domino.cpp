#include <iostream>
using namespace std;
int main(){
    unsigned long long N,M;
    cin>>N>>M;
    if (N==1 && M==1){
        cout<<"0"<<endl;
    }
    else if(M==1){
        unsigned long long ans = (N-1)*M;
        cout<<ans<<endl;
    }
    else{
        unsigned long long ans = (M-1)*N;
        cout<<ans<<endl;
    }
    return 0;
}