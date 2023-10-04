#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if (n==1 || m==1){
            cout<<n<<" "<<m<<endl;
            break;
        }
        else if (n>=4 || m>=4){
            cout<<n<<" "<<m<<endl;
        }
        else{
            cout<<(n/2 + 1)<<" "<<(m/2 + 1)<<endl;
        }
    }
    return 0;
}