#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    sort(arr,arr+n);
    int mini = arr[0];
    //cout<<mini<<endl;
    int i=1;
    int j=0;
    if(mini<0){
        while(mini<=0 && i<n){
            mini = arr[i];
            j=i;
            i++;
        }
    }
    if(mini!=1){
        cout<<"1"<<endl;
    }
    else{
        for(int i=j;i<n;i++){
            if((arr[i+1] - arr[i]) != 1){
                ans = arr[i]+1;
                break;
            }
        }
    }
    cout<<ans;
    /*int ans;
        sort(arr,arr+n);
        int mini = arr[0];
        //cout<<mini<<endl;
        if(mini!=1 && mini>0){
            cout<<"1"<<endl;
        }
        else if(mini<0){
            for (int i=1;i<=(n+1);i++){
                if(count(arr,arr+n,i)==0){
                    ans = i;
                    break;
                }
            }
        }
        else{
            for (int i=mini;i<=(n+1);i++){
                if(count(arr,arr+n,i)==0){
                    ans = i;
                    break;
                }
            }
        }*/
    return 0;
}