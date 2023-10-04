#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        bool odd = false,even = false;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            sum = sum + arr[i];
            if(arr[i]%2 == 0){
                even = true;
            }
            else{
                odd = true;
            }
        }
        if(sum%2 != 0){
            cout<<"YES"<<endl;
        }
        else{
            if(even && odd){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}