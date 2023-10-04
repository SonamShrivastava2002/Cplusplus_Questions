#include <iostream>
#include <vector>
using namespace std;
int summing(int arr[],int s){
    int sum=0;
    for (int i=1;sum<s;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int m,s;
        cin>>m>>s;
        int arr[m];
        for (int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int j:arr){
            s = s + j;
        }
        int final_sum = summing(arr,s);
        if (final_sum == s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}