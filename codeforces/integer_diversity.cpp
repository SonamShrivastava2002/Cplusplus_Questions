#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int cnt1,cnt2;
        int i=0;
        int ans=0;
        while(i<n){
            if(arr[i]==0){
                ans = ans+1;
                cnt1 = count(arr,arr+n,arr[i]);
                i=i+cnt1;
            }
            else{
                cnt1 = count(arr,arr+n,arr[i]);
                cnt2 = count(arr,arr+n,(-arr[i]));
                i=i+cnt1;
                if(cnt2!=0){
                    ans = ans+1;
                }
                else if(cnt2==0 && cnt1>=2){
                    ans = ans+2;
                }
                else{
                    ans = ans + 1;
                }
            }
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}