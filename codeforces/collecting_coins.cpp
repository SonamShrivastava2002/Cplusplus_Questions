#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[3];  
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        cin>>n;
        sort(arr,arr+3);
        n = n-(2*arr[2] - arr[1] - arr[0]);
        if(n%3 != 0 || n<0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}