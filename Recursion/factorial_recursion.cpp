#include <iostream> 
using namespace std;
int fact(int n){
    //base case
    if(n==0 || n==1)
        return 1;
    /*int choti = fact(n-1);
    int badi = n*choti;
    return badi;*/
        // OR
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}