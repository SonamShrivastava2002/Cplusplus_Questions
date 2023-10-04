#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s=0,e=0;
        for (int i=1;i<n-1;i++){
            if(arr[i]!=arr[i-1]){
                s = i-1;
                break;
            }
        }
        for (int j=n-2;j>0;j--){
            if(arr[j]!=arr[j+1]){
                e=j+1;
                break;
            }
        }
        cout<<e-s<<endl; 
    }
    return 0;
}