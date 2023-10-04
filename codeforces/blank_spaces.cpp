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
        int count=0;
        int ans=0;
        for (int j:arr){
            if (j==0){
                count ++;
            }
            ans = max(ans,count);
            if(j!=0){ 
                count = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}