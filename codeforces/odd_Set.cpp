#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        vector<int> odd,even;
        for (int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        for (int i:arr){
            if(i%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        if(even.size() == odd.size()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}