#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;      
        cin>>n;
        int arr[n];
        int count=0;
        sort(arr,arr + n);
        set<int> s;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                count++;    
            }
            s.insert(arr[i]);
        }
        if (count>0){
            cout<<(n-count)<<endl;
        }
        else{
            if(s.size()<n){
                cout<<n<<endl;
            }
            else{
                cout<<n+1<<endl;
            }
        }
    }
    return 0;
}