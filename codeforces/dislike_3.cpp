#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> arr;
        int i=1;
        while(arr.size()<=k){
            if((i%3==0) || i%10==3){
                i++;
            }
            else{
                arr.push_back(i);
                i++;
            }
        }
        /*for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }*/
        cout<<arr[k-1]<<endl;
    }
    return 0;
}