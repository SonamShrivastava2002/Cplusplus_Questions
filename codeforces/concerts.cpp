#include <iostream> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = (a + 2*b + 3*c);
        if(ans%2 == 0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}