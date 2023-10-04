#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long m;
        cin>>n>>m;
        string arr;
        cin>>arr;
        if((count(arr.begin(),arr.end(),'1')==0)){
            cout<<arr<<endl;
        }
        else{
            string sample = arr;
            while(m--){
                for (int j=0;j<n;j++){
                    if(arr[j]=='0'){
                        if(j==0 && j+1<n && arr[j+1]=='1'){
                            sample[j] = '1';
                        }
                        else if(j==n-1 && j-1>0 && arr[j-1]=='1'){
                            sample[j] = '1';
                        }
                        else{ 
                            if(arr[j+1]=='1' && arr[j-1]=='1'){
                                continue;
                            }
                            else if(arr[j+1]=='1' || arr[j-1]=='1'){
                                sample[j] = '1';
                            }
                        }
                    }    
                }
                if(sample==arr){
                    break;
                }
                else{
                    arr=sample;
                }
            }
            cout<<sample<<endl;
        }  
    }
    return 0;
}