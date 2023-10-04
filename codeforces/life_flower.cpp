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
        int size = 1;
        for (int i=0;i<n;i++){
            if(arr[i]==1 && arr[i+1]==1){
                size = size+5;
            }
            else if(arr[i]==1 && arr[i+1]!=1){
                size = size+1;
            }
            else if(arr[i] == 0 && arr[i+1] == 0){
                size = -1;
                break;
            }
        }
        cout<<size<<endl;
    }
    return 0;
}