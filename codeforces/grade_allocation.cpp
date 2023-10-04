#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        //student1 - max marks krne h
        int sum=0;
        for (int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        cout<<min(sum,m)<<endl;
    }
}