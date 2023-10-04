#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        unsigned long long arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        unsigned long long sum = 0;
        for (int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        if(sum==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}