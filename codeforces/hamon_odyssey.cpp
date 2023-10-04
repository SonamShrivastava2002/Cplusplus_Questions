#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt = 1;
        int a = arr[0] & arr[1];
        for (int i=0;i<n-1;i++){
            cout<<(a & arr[i])<<endl;
            if(a & arr[i]){
                cnt++;
                a = arr[i] & arr[i+1];
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}