#include <bits/stdc++.h>
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
        if(n==1){
            cout<<arr[0]<<endl;
        }
        else if(n==2){
            cout<<(arr[1] - arr[0])<<endl;
        }
        else{
            int ans = 0;
            for(int k=n-1;k>=1;k--){
                if((n%k) == 0){
                    int box = n/k;
                    int s1=0,s2=0;
                    for(int i=0;i<box;i++){
                        s1 += arr[i];
                    }
                    for(int i=box;i<n;i++){
                        s2 += arr[i];
                    }
                    ans = max(ans,abs(s1-s2));
                }
            }
        }
    }
    return 0;
}